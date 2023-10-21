def square_sum(numbers):
    squared_numbers = []
    for number in numbers:
            squared_numbers.append(number ** 2)
    return sum(squared_numbers)