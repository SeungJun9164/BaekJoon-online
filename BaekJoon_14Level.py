# 2750번
n = int(input())
arr = []
for i in range(n):
    num = int(input())
    arr.append(num)
arr.sort()
for i in arr:
    print(i)