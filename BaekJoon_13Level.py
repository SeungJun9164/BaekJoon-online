# 브루드 포스 알고리즘(brute force algorithm)
# 모든 경우의 수를 모두 해보는 것

# # 2798번
# n, m = map(int, input().split())
# arr = list(map(int, input().split()))
# _sum = 0
# for i in range(0, len(arr) - 2):
#     for j in range(i + 1, len(arr) - 1):
#         for k in range(j + 1, len(arr)):
#             if arr[i] + arr[j] + arr[k] <= m:
#                 _sum = max(_sum, arr[i] + arr[j] + arr[k])
#             else:
#                 continue
# print(_sum)
#
# # 2231번
# n = int(input())
# for i in range(1, n+1):
#     x = list(map(int, str(i)))
#     _sum = i + sum(x)
#     if _sum == n:
#         print(i)
#         break
#     if i == n:
#         print(0)

# # 7568번
# n = int(input())
# a = []
# for i in range(n):
#     x, y = list(map(int, input().split()))
#     a.append((x, y))
# arr = []
# for i in range(len(a)):
#     rank = 1
#     for j in range(len(a)):
#         if a[i][0] < a[j][0] and a[i][1] < a[j][1]:
#             rank += 1
#     arr.append(rank)
# for i in arr:
#     print(i, end=' ')

# 1018번
N, M = map(int, input().split())
board = [input() for _ in range(N)]
w, b = 'WBWBWBWB', 'BWBWBWBW'
white = [w, b] * 4
black = [b, w] * 4

min_ = 64
for y in range(N-7):
    for x in range(M-7):
        cnt = 0
        for i in range(8):
            for j in range(8):
                if board[y+i][x+j] != white[i][j]:
                    cnt += 1
            if cnt > min_:
                break
        min_ = min(min_, cnt)
        cnt = 0
        for i in range(8):
            for j in range(8):
                if board[y+i][x+j] != black[i][j]:
                    cnt += 1
            if cnt > min_:
                break
        min_ = min(min_, cnt)

print(min_)

