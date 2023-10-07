def solution(numbers, direction):
    if direction == 'left':
        numbers.insert(len(numbers), numbers[0])
        del numbers[0]
    else:
        numbers.insert(0, numbers[-1])
        del numbers[-1]
    return numbers