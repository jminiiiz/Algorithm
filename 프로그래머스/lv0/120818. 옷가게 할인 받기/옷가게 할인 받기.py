def solution(price):
    discount = { 500000: 0.8, 300000: 0.9, 100000: 0.95, 10: 1 }
    for Dprice, Drate in discount.items():
        if price >= Dprice:
            return int(price * Drate)