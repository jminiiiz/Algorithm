myList = []

for i in range(9):
    myList.append(int(input()))

print(max(myList))
print(myList.index(max(myList))+1)