from itertools import combinations

N, M = map(int, input().split())
card = list(map(int, input().split()))

total = 0
for i in list(combinations(card, 3)):
    if sum(i) <= M:
        total = max(total, sum(i))
print(total)