def solution(my_string):
    arr = my_string.split()
    answer = int(arr[0])
    for i in range(1, len(arr), 2):
        op = arr[i]
        num = int(arr[i+1])
        if op == '+':
            answer += num
        elif op == '-':
            answer -= num
    return answer