def dna_to_rna(dna):
    new_str = ""
    for letter in dna:
        if letter != "T":
            new_str += letter
        elif letter == "T":
            new_str += "U"
    return new_str

dna = "TTTTTTTTCTREUS"

print(dna_to_rna(dna))