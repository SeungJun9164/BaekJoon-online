# 브루드 포스 알고리즘(brute force algorithm)
# 모든 경우의 수를 모두 해보는 것
# 2798번
n, m = map(int, input().split())
arr = list(map(int, input().split()))
_sum = 0
for i in range(0, len(arr) - 2):
    for j in range(i + 1, len(arr) - 1):
        for k in range(j + 1, len(arr)):
            if arr[i] + arr[j] + arr[k] <= m:
                _sum = max(_sum, arr[i] + arr[j] + arr[k])
            else:
                continue
print(_sum)

# 2231번
n = int(input())
for i in range(1, n+1):
    x = list(map(int, str(i)))
    _sum = i + sum(x)
    if _sum == n:
        print(i)
        break
    if i == n:
        print(0)
