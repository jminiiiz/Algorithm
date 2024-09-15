n = int(input())
for i in range(n):
    s = list(input())
    score, count = 0, 1
    for j in s:
        if j == 'O':
            score += count
            count += 1
        else:
            count = 1
    print(score)