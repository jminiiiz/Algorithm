a = []
for i in range(10):
    num = int(input())
    a.append(num % 42)
b = set(a)
print(len(b))