t = int(input())
for _ in range(t):
    s = input().replace(' ', '')
    arr = [0] * 26
    for i in s:
        arr[ord(i) - 97] += 1
    if arr.count(max(arr)) > 1:
        print('?')
    else:
        print(chr(97 + arr.index(max(arr))))