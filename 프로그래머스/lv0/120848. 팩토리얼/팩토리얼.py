import math

def solution(n):      
    i = 0
    while True:
        i += 1
        if n < math.factorial(i):
            return i-1