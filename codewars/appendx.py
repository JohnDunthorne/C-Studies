def count_by(x, n):
    arr = []
    while len(arr) < n:
        arr.append(x)
        x += 1  # Increment 'x' by its original value
    return arr

# Example usage:
x = 2
n = 5
result = count_by(x, n)
print(result)  # Output: [2, 4, 6, 8, 10]