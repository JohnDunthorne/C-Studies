def digitize(n):
    list = []
    for number in n:
        list.append(number)
    list = list[::-1]
    return list

n = "35231"
print (digitize(n))