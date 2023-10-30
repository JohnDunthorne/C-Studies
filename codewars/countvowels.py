def get_count(sentence):
    if not sentence:
        return 0
    newstr = ""
    for i in sentence:
        if i == "a" or "e" or "i" or "o" or "u":
            newstr += i
    return len(newstr)


sentence = "aeioubbbbbbbb"

print(get_count)