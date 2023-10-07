def solution(hp):
    ant = hp // 5
    hp %= 5
    ant += (hp // 3)
    hp %= 3
    ant += hp
    return ant