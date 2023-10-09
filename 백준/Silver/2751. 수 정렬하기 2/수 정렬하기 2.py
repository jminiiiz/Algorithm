import sys
N = int(input())
myList = []
for i in range(N):
    myList.append(int(sys.stdin.readline()))
    
for i in sorted(myList):
    print(i)