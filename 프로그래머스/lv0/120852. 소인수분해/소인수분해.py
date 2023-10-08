import math

def solution(n):
    answer = []
    d = 2
    while d <= math.sqrt(n):
        if n % d != 0:
            d += 1
        else:
            answer.append(d)
            n //= d
    if n > 1:
        answer.append(n)
    return sorted(set(answer))
