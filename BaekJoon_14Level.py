import sys

# 2750번
n = int(input())
arr = []
for i in range(n):
    num = int(input())
    arr.append(num)
arr.sort()
for i in arr:
    print(i)

# 2751번
n = int(sys.stdin.readline())
arr = []
for i in range(n):
    num = int(sys.stdin.readline())
    arr.append(num)
arr.sort()
for i in arr:
    sys.stdout.write(str(i) + '\n')

# 10989번
n = int(sys.stdin.readline())
arr = [0] * 10001
for i in range(n):
    arr[int(sys.stdin.readline())] += 1
for i in range(10001):
    if arr[i] != 0:
        for j in range(arr[i]):
            print(i)

# 2108번
from collections import Counter # 컨테이너에 동일한 값의 자료가 몇개인지를 파악 / 출력 : dict 형태로 출력
n = int(sys.stdin.readline())
arr = []
for i in range(n):
    arr.append(int(sys.stdin.readline()))
arr.sort()
num = Counter(arr).most_common()
print(round(sum(arr) / n))
print(arr[n // 2])
if len(num) > 1:
    if num[0][1] == num[1][1]:
        print(num[1][0])
    else:
        print(num[0][0])
else:
    print(num[0][0])
print(arr[-1] - arr[0])

# 1427번
n = list(str(input()))
n.sort(reverse=True)
for i in n:
    print(i, end='')

# 11650번
n = int(input())
arr = []
for i in range(n):
    x, y = map(int, input().split())
    arr.append((x, y))
arr.sort()
for i in arr:
    print(i[0], i[1])

# 11651번
n = int(input())
arr = []
for i in range(n):
    x, y = map(int, input().split())
    arr.append((y, x))
arr.sort()
for i in arr:
    print(i[1], i[0])

# 1181번
n = int(input())
_str = []
for i in range(n):
    a = str(input())
    num = len(a)
    _str.append((num, a))
_str = list(set(_str))
_str.sort()
for i in _str:
    print(i[1])

# 10814번
n = int(input())
arr = []
for i in range(n):
    age, name = input().split()
    age = int(age)
    arr.append((age, name))
arr.sort(key=lambda x: int(x[0]))

for i in arr:
    print(i[0], i[1])
