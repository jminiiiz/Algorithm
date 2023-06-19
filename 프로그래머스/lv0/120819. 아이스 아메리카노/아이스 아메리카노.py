def solution(money):
    coffee = money // 5500
    changes = money - coffee * 5500
    answer = [coffee, changes]
    return answer