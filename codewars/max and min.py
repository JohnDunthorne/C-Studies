def minimum(arr):
    smallest = arr[0]
    for number in arr:
        if number < smallest:
            smallest = number
    return smallest

def maximum(arr):
    largest = arr[0]
    for number in arr:
        if number > largest:
            largest = number
    return largest