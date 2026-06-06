#!/usr/bin/env python3
"""Fix single-argument INCGFX calls that were incorrectly migrated.

The migration script should produce INCGFX_U32("source.png", ".ext") but
some custom entries ended up as INCGFX_U32("file.4bpp.lz") with one arg,
which causes FATAL_INPUT_ERROR in scaninc and preproc.
"""
import re
import sys

def fix_file(path):
    with open(path, 'r') as f:
        content = f.read()

    orig = content

    # Fix single-arg INCGFX_U32 for .4bpp.lz icons
    # e.g. INCGFX_U32("graphics/items/icons/foo.4bpp.lz")
    #   -> INCGFX_U32("graphics/items/icons/foo.png", ".4bpp.lz")
    content = re.sub(
        r'INCGFX_U32\("(graphics/items/icons/\w+)\.4bpp\.lz"\)',
        lambda m: 'INCGFX_U32("{}.png", ".4bpp.lz")'.format(m.group(1)),
        content
    )

    # Fix single-arg INCGFX_U16 for icons/*.gbapal (no .pal source - derive from .png)
    # e.g. INCGFX_U16("graphics/items/icons/foo.gbapal")
    #   -> INCGFX_U16("graphics/items/icons/foo.png", ".gbapal")
    content = re.sub(
        r'INCGFX_U16\("(graphics/items/icons/\w+)\.gbapal"\)',
        lambda m: 'INCGFX_U16("{}.png", ".gbapal")'.format(m.group(1)),
        content
    )

    # Fix single-arg INCGFX_U16 for icon_palettes/*.gbapal (has .pal source)
    # e.g. INCGFX_U16("graphics/items/icon_palettes/foo.gbapal")
    #   -> INCGFX_U16("graphics/items/icon_palettes/foo.pal", ".gbapal")
    content = re.sub(
        r'INCGFX_U16\("(graphics/items/icon_palettes/\w+)\.gbapal"\)',
        lambda m: 'INCGFX_U16("{}.pal", ".gbapal")'.format(m.group(1)),
        content
    )

    if content == orig:
        print("No changes needed in {}".format(path))
        return

    changed = sum(1 for a, b in zip(orig.splitlines(), content.splitlines()) if a != b)
    print("Fixed {} lines in {}".format(changed, path))

    with open(path, 'w') as f:
        f.write(content)

if __name__ == '__main__':
    paths = sys.argv[1:] if sys.argv[1:] else [
        'src/data/graphics/items.h'
    ]
    for p in paths:
        fix_file(p)
