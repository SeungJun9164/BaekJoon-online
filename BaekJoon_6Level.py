# 10818번
n = int(input())
arr = list(map(int, input().split()))
print(min(arr), max(arr)) # max, min : 최대, 최소값 구하는 함수

# 2562번
n = []
for i in range(9):
    n.append(int(input()))
max = n[0]
cnt = 0
for i in range(9):
    if max <= n[i]:
        max = n[i]
        cnt = i + 1
print(max)
print(cnt)

# 2577번
a = int(input())
b = int(input())
c = int(input())
mul = list(str(a * b * c))

for i in range(10):
    print(mul.count(str(i)))

# 3052번
n = []
for i in range(10):
    _n = int(input())
    n.append(_n % 42)
n = set(n) # set : 중복을 제거한 집합 자료형
print(len(n))

# 1546번
n = int(input())
arr = list(map(int, input().split()))
m = max(arr)
r_arr = []
for i in range(n):
    r_arr.append(arr[i] / m * 100)
print(format(sum(r_arr) / n, ".6f"))

# 8958번
n = int(input())
test = []
score = []
for i in range(n):
    test.append(str(input()))
    score.append(0)
for i in range(n):
    cnt = 0
    for j in range(len(test[i])):
        if test[i][j] == 'O':
            cnt += 1
            score[i] += cnt
        else:
            cnt = 0
for i in range(n):
    print(score[i])

# 4344번
c = int(input())
per_cnt = []
for i in range(c):
    score = list(map(int, input().split()))
    avg = (sum(score) - score[0]) / score[0]
    cnt = 0
    for j in range(1, len(score)):
        if score[j] > avg:
            cnt += 1
    print('%0.3f' % round(cnt / score[0] * 100, 3), '%', sep='')
    # round : 반올림(반올림할 수, 표시할 자릿 수)


