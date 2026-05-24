import re

def parse_labels(file_path):
    labels = {}
    with open(file_path, 'r', encoding='utf-8') as f:
        for line in f:
            line = line.strip()
            # match lines like {0x00,0,152,1,-1,"Label"}
            # ignore commented out lines for now or maybe keep them?
            # Let's check all, uncommented or not, to see coverage.
            is_comment = line.startswith("//")
            if is_comment:
                line = line[2:].strip()
            match = re.search(r'\{(0x[0-9A-Fa-f]+|\d+)\s*,\s*(-?\d+)\s*,\s*(-?\d+)\s*,\s*(-?\d+)\s*,\s*(-?\d+)\s*,\s*"(.*?)"\s*\}', line)
            if match:
                reg, off, conv, dsize, dtype, label = match.groups()
                key = f"{reg},{off},{conv},{dsize},{dtype}"
                labels[key] = {
                    'label': label,
                    'is_comment': is_comment,
                    'original': line
                }
    return labels

en_labels = parse_labels("include/def/Altherma(EPRA D_D7 ETSH-X 16P30-50 E_E7 series 14-18kW-ECH2O).h")
de_labels = parse_labels("include/def/German/Altherma(EPRA D_D7 ETSH-X 16P30-50 E_E7 series 14-18kW-ECH2O).h")

missing_in_de = []
for key, en_data in en_labels.items():
    if key not in de_labels:
        missing_in_de.append(en_data['original'])

extra_in_de = []
for key, de_data in de_labels.items():
    if key not in en_labels:
        extra_in_de.append(de_data['original'])

print("=== Missing in German version ===")
for m in missing_in_de:
    print(m)

print("\n=== Extra in German version (not in EN) ===")
for e in extra_in_de:
    print(e)

print("\n=== Untranslated or suspicious in German version ===")
for key, de_data in de_labels.items():
    if "Not translated yet" in de_data['label'] or "Not in use" in de_data['label']:
        print(f"{key}: {de_data['label']}")
        if key in en_labels:
             print(f"  EN label was: {en_labels[key]['label']}")

