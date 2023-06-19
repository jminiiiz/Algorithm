T = int(input())
for i in range(T):
    R, S = input().split()
    text = ""
    for _ in S:
        text += _ * int(R)
    print(text)