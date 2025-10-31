import re
from pathlib import Path

p = Path(r"c:\Users\keywo\Documents\GitHub\pokeemerald-expansion\src\data\items.h")
s = p.read_text(encoding='utf-8')

# Find all ITEM_TM_* blocks
pattern = re.compile(r"(\[ITEM_TM_[A-Z0-9_]*\]\s*=\s*\{)(.*?)\},", re.S)
matches = pattern.finditer(s)

results = []
count = 0
for m in matches:
    header = m.group(1)
    body = m.group(2)
    # Extract the ITEM id and TM number
    id_match = re.search(r"\[ITEM_TM_([A-Z0-9_]+)\]", header)
    item_id = id_match.group(0) if id_match else header.strip()
    # Find .description = ...
    desc_match = re.search(r"\.description\s*=\s*(.*?)(,\n|\n)", body, re.S)
    if not desc_match:
        # no description found
        continue
    desc_expr = desc_match.group(1).strip()
    count += 1
    entry = {"item": item_id, "expr": desc_expr, "flags": [], "lines": []}
    if desc_expr.startswith('s') and 'COMPOUND_STRING' not in desc_expr:
        entry['flags'].append('VARIABLE_DESC')
        results.append(entry)
        continue
    # If COMPOUND_STRING, extract the parenthesized block starting at COMPOUND_STRING(
    cs_idx = body.find('COMPOUND_STRING(')
    if cs_idx == -1:
        entry['flags'].append('NO_COMPOUND')
        results.append(entry)
        continue
    # Find the opening '(' position in the body
    start_idx = body.find('COMPOUND_STRING(') + len('COMPOUND_STRING(')
    # Scan for matching closing ')'
    paren = 1
    i = start_idx
    while i < len(body) and paren > 0:
        c = body[i]
        if c == '(':
            paren += 1
        elif c == ')':
            paren -= 1
        i += 1
    cs_block = body[start_idx:i-1]
    # Extract all C string literals inside
    string_literals = re.findall(r'"([^\"]*)"', cs_block)
    # Join them and expand \n into actual newlines, but keep individual strings as separate pieces
    combined = ''.join(string_literals)
    # Turn explicit \n into newline
    combined = combined.replace('\\n', '\n')
    # Now split into lines
    lines = combined.split('\n')
    # Remove possible empty trailing line
    if len(lines) > 0 and lines[-1] == '':
        lines = lines[:-1]
    entry['lines'] = lines
    # Check lengths
    for idx, line in enumerate(lines, start=1):
        length = len(line)
        entry['lines'][idx-1] = (line, length)
        if length > 18:
            entry['flags'].append(f'LINE_OVER_{length}')
    if len(lines) > 3:
        entry['flags'].append(f'LINES_{len(lines)}')
    results.append(entry)

# Print concise report
out_lines = []
out_lines.append(f"Scanned ITEM_TM_ blocks: {count}\n")
for r in results:
    if r['flags']:
        out_lines.append(f"{r['item']}: flags={', '.join(r['flags'])}")
        if r.get('lines'):
            for ln, ln_len in r['lines']:
                out_lines.append(f"  '{ln}' ({ln_len})")
        out_lines.append('')

if not any(r['flags'] for r in results):
    out_lines.append('No problems found.')

print('\n'.join(out_lines))
