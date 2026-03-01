#!/usr/bin/env python3
"""
Script to add MOVE_SCALD to elite learnsets for species that have
MOVE_SCALD_PLACEHOLDER but not MOVE_SCALD in their teachable learnsets.
"""
import re

ELITE_FILE = 'src/data/pokemon/elite_learnsets.h'

# 129 species that have MOVE_SCALD_PLACEHOLDER but not MOVE_SCALD in teachable learnsets
# 119 of these already have elite learnsets, 10 need new ones
EXISTING_SPECIES = [
    'Squirtle', 'Wartortle', 'Blastoise', 'Psyduck', 'Golduck',
    'Poliwag', 'Poliwhirl', 'Poliwrath', 'Politoed', 'Tentacool', 'Tentacruel',
    'Slowpoke', 'SlowpokeGalar', 'SlowbroGalar', 'SlowkingGalar',
    'Krabby', 'Kingler', 'Horsea', 'Seadra', 'Goldeen', 'Seaking',
    'Staryu', 'Starmie', 'Omanyte', 'Omastar', 'Kabuto', 'Kabutops',
    'Totodile', 'Croconaw', 'Feraligatr',
    'Azurill', 'Marill', 'Azumarill', 'Wooper', 'Quagsire',
    'Qwilfish', 'Corsola',
    'Remoraid', 'Octillery', 'Mantyke', 'Mantine',
    'Mudkip', 'Marshtomp', 'Swampert',
    'Lotad', 'Lombre', 'Ludicolo',
    'Wingull', 'Pelipper', 'Surskit', 'Masquerain',
    'Carvanha', 'Sharpedo', 'Wailmer', 'Wailord',
    'Barboach', 'Whiscash', 'Corphish', 'Crawdaunt',
    'Feebas', 'Huntail', 'Relicanth', 'Luvdisc', 'Kyogre',
    'Piplup', 'Prinplup', 'Empoleon', 'Bibarel', 'Buizel', 'Floatzel',
    'Shellos', 'Gastrodon', 'Finneon', 'Lumineon',
    'Oshawott', 'Dewott', 'Samurott',
    'Simipour', 'Tympole', 'Palpitoad', 'Seismitoad',
    'Basculin', 'Tirtouga', 'Carracosta', 'Ducklett', 'Swanna',
    'Frillish', 'Jellicent', 'Stunfisk', 'Keldeo',
    'Froakie', 'Frogadier', 'Greninja',
    'Barbaracle', 'Skrelp', 'Clauncher', 'Clawitzer',
    'Popplio', 'Brionne', 'Primarina',
    'Crabrawler', 'Crabominable', 'Wishiwashi', 'Mareanie', 'Toxapex',
    'Dewpider', 'Araquanid', 'Wimpod', 'Golisopod', 'Bruxish', 'TapuFini',
    'Drednaw', 'Cramorant', 'Arrokuda', 'Barraskewda',
    'Dracovish',
    'Drakloak', 'Dragapult', 'UrshifuRapidStrike',
]

# Species that need new elite learnsets created
NEW_SPECIES = {
    # species_name: (family, form_guard, position_info)
    # form_guard: None, 'P_GALARIAN_FORMS', etc.
    'CorsolaGalar': ('CORSOLA', 'P_GALARIAN_FORMS'),
    'Cursola': ('CORSOLA', 'P_GALARIAN_FORMS'),
    'Castform': ('CASTFORM', None),
    'Clamperl': ('CLAMPERL', None),
    'Gorebyss': ('CLAMPERL', None),
    'Panpour': ('PANPOUR', None),
    'StunfiskGalar': ('STUNFISK', 'P_GALARIAN_FORMS'),
    'Binacle': ('BINACLE', None),
    'Sizzlipede': ('SIZZLIPEDE', None),
    'Centiskorch': ('SIZZLIPEDE', None),
}

def add_scald_to_existing(content, species_list):
    """Add MOVE_SCALD before MOVE_UNAVAILABLE in existing elite learnsets."""
    for species in species_list:
        pattern = rf'(static const u16 s{species}EliteLearnset\[\] = \{{[^}}]*?)(    MOVE_UNAVAILABLE,)'
        match = re.search(pattern, content)
        if match:
            # Check if MOVE_SCALD already exists
            block = match.group(1)
            if 'MOVE_SCALD,' in block:
                print(f"  SKIP {species}: already has MOVE_SCALD")
                continue
            replacement = match.group(1) + '    MOVE_SCALD,\n' + match.group(2)
            content = content[:match.start()] + replacement + content[match.end():]
            print(f"  ADDED MOVE_SCALD to {species}")
        else:
            print(f"  ERROR: could not find {species}EliteLearnset")
    return content


def add_new_learnsets(content):
    """Create new elite learnsets for species that don't have one yet."""
    
    # Group new species by family
    families = {}
    for species, (family, form_guard) in NEW_SPECIES.items():
        if family not in families:
            families[family] = []
        families[family].append((species, form_guard))
    
    for family, species_list in families.items():
        family_tag = f'P_FAMILY_{family}'
        endif_tag = f'#endif //P_FAMILY_{family}'
        
        if family_tag in content:
            # Family block exists - add new species before the #endif
            # Group by form_guard
            guarded = {}
            unguarded = []
            for species, form_guard in species_list:
                if form_guard:
                    if form_guard not in guarded:
                        guarded[form_guard] = []
                    guarded[form_guard].append(species)
                else:
                    unguarded.append(species)
            
            new_code = ""
            for species in unguarded:
                new_code += f"\nstatic const u16 s{species}EliteLearnset[] = {{\n    MOVE_SCALD,\n    MOVE_UNAVAILABLE,\n}};\n"
            
            for guard, guard_species in guarded.items():
                # Check if this guard already exists within the family block
                family_start = content.index(f'#if {family_tag}')
                family_end = content.index(endif_tag, family_start)
                family_block = content[family_start:family_end]
                
                if f'#if {guard}' in family_block:
                    # Add inside existing guard block within this family
                    # Find the #endif for this guard within the family block
                    guard_start_abs = content.index(f'#if {guard}', family_start)
                    guard_endif_abs = content.index(f'#endif //{guard}', guard_start_abs)
                    
                    insert_code = ""
                    for species in guard_species:
                        insert_code += f"\nstatic const u16 s{species}EliteLearnset[] = {{\n    MOVE_SCALD,\n    MOVE_UNAVAILABLE,\n}};\n"
                    
                    content = content[:guard_endif_abs] + insert_code + content[guard_endif_abs:]
                    print(f"  CREATED {', '.join(guard_species)} inside existing {guard} in {family_tag}")
                else:
                    # Need to add a new guard block
                    guard_code = f"\n#if {guard}\n"
                    for species in guard_species:
                        guard_code += f"static const u16 s{species}EliteLearnset[] = {{\n    MOVE_SCALD,\n    MOVE_UNAVAILABLE,\n}};\n\n"
                    guard_code += f"#endif //{guard}\n"
                    new_code += guard_code
            
            if new_code:
                # Insert before #endif //P_FAMILY_xxx
                idx = content.index(endif_tag)
                content = content[:idx] + new_code + content[idx:]
                for species in unguarded:
                    print(f"  CREATED {species} in existing {family_tag}")
                for guard, guard_species in guarded.items():
                    if f'#if {guard}' not in content[content.index(f'#if {family_tag}'):content.index(endif_tag)]:
                        # Already handled above
                        pass
        else:
            # Need entirely new family block
            # Find the right insertion point based on the order in elite_learnsets.h
            new_block = f"\n#if {family_tag}\n"
            
            guarded = {}
            unguarded = []
            for species, form_guard in species_list:
                if form_guard:
                    if form_guard not in guarded:
                        guarded[form_guard] = []
                    guarded[form_guard].append(species)
                else:
                    unguarded.append(species)
            
            for species in unguarded:
                new_block += f"static const u16 s{species}EliteLearnset[] = {{\n    MOVE_SCALD,\n    MOVE_UNAVAILABLE,\n}};\n"
            
            for guard, guard_species in guarded.items():
                new_block += f"\n#if {guard}\n"
                for species in guard_species:
                    new_block += f"static const u16 s{species}EliteLearnset[] = {{\n    MOVE_SCALD,\n    MOVE_UNAVAILABLE,\n}};\n\n"
                new_block += f"#endif //{guard}\n"
            
            new_block += f"#endif //{family_tag}\n"
            
            # Find insertion point
            if family == 'CASTFORM':
                # CASTFORM goes after ABSOL (or after SNORUNT, before CLAMPERL)
                # Looking at the file, it should go between ABSOL and SNORUNT
                insert_after = '#endif //P_FAMILY_ABSOL'
            elif family == 'SIZZLIPEDE':
                # SIZZLIPEDE is Gen 8; should go near other Gen 8 families
                # In the Pokedex order, Sizzlipede (#850) is after Cufant (#878) area
                # Actually Sizzlipede is #850, before Clobbopus (#852)
                # Let me find the right place - after MILCERY or FALINKS
                insert_after = '#endif //P_FAMILY_FALINKS'
            else:
                print(f"  ERROR: Don't know where to insert {family_tag}")
                continue
            
            idx = content.index(insert_after) + len(insert_after)
            content = content[:idx] + new_block + content[idx:]
            for species in unguarded:
                print(f"  CREATED new {family_tag} with {species}")
            for guard, guard_species in guarded.items():
                print(f"  CREATED new {family_tag} with {', '.join(guard_species)} under {guard}")
    
    return content


def main():
    with open(ELITE_FILE, 'r') as f:
        content = f.read()
    
    print("Adding MOVE_SCALD to existing elite learnsets...")
    content = add_scald_to_existing(content, EXISTING_SPECIES)
    
    print("\nCreating new elite learnsets...")
    content = add_new_learnsets(content)
    
    with open(ELITE_FILE, 'w') as f:
        f.write(content)
    
    print("\nDone!")


if __name__ == '__main__':
    main()
