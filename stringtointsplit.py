def high_and_low(numbers):
    numbers_list = [int(num) for num in numbers.split()]
        
    numbers_list.sort()
    return f"{numbers_list[-1]} {numbers_list[0]}"