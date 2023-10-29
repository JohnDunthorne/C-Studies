def double_char(s):
    doubled = ""
    for i in s:
        doubled +=i * 2
    return doubled
    
s = "string"

result = double_char(s)

print(result)