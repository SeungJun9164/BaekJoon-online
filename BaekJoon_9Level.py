# # 1712번
# import sys
# a, b, c = map(int, sys.stdin.readline().split())
# if b >= c:
#     print(-1)
# else:
#     cnt = a // (c - b) + 1
#     print(cnt)

# # 2839번
# n = int(input())
# if n % 5 == 0:
#     print(n//5)
# else:
#     cnt = n // 5
#     while cnt >= 0:
#         if (n - (cnt * 5)) % 3 == 0:
#             print(cnt + (n - (cnt * 5)) // 3)
#             break
#         else:
#             cnt -= 1
#     if cnt == -1:
#         print(-1)

# # 2292번
# n = int(input())
# sum = 1
# cnt = 1
# while n > sum:
#     sum += cnt * 6
#     cnt += 1
# print(cnt)

# # 1193번
# x = int(input())
# cnt = 0
# group = 0
# while cnt < x:
#     group += 1
#     cnt += group
# if group % 2 == 0:
#     print(group - (cnt - x), '/', (cnt - x) + 1, sep='')
# else:
#     print((cnt - x) + 1, '/', group - (cnt - x), sep='')

# # 2869번
# a, b, v = map(int, input().split())
# if ((v - b) % (a - b)) == 0:
#     day = (v - b) // (a - b)
# else:
#     day = (v - b) // (a - b) + 1
# print(day)

# # 10250번
# t = int(input())
# for i in range(t):
#     h, w, n = map(int, input().split())
#     y = n % h
#     x = n // h + 1
#     if y == 0:
#         y = h
#         x -= 1
#     print(y * 100 + x)

# 2775번
str = [[0 for i in range(15)] for j in range(15)]
for i in range(15):
    str[0][i] = i + 1
    str[i][0] = 1

for i in range(1, 15):
    for j in range(1, 15):
        str[i][j] = str[i - 1][j] + str[i][j - 1]

t = int(input())
for i in range(t):
    k = int(input())
    n = int(input())
    print(str[k][n - 1])
