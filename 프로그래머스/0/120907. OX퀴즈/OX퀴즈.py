def solution(quiz):
    answer = []
    for i in range(len(quiz)):
        arr = quiz[i].split()
        if arr[1] == "+":
            if int(arr[0]) + int(arr[2]) == int(arr[4]):
                answer.append("O")
            else:
                answer.append("X")
        else:
            if int(arr[0]) - int(arr[2]) == int(arr[4]):
                answer.append("O")
            else:
                answer.append("X")
    return answer