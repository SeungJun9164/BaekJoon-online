import sys
# # 10039번
# sum = 0
# for i in range(5):
#     n = int(input())
#     if n < 40:
#         n = 40
#     else:
#         n = n
#     sum += n
# print(sum//5)

# # 5543번
# n = []
# for i in range(5):
#     n.append(int(input()))
# min = n[0] + n[3] - 50
#
# for i in range(3):
#     for j in range(3, 5):
#         if min > (n[i] + n[j] - 50):
#             min = (n[i] + n[j] - 50)
# print(min)

# # 10817번
# a, b, c = map(int, map(int, sys.stdin.readline().split()))
#
# if a > b:
#     if a > c:
#         if b > c:
#             mid = b
#         else:
#             mid = c
# elif b > c:
#     if a > c:
#         mid = a
#     else:
#         mid = c
# else:
#     mid = b
#
# print(mid)
#
# # 위의 코드가 정상적으로 작동되지만 계속 런타임 오류가 떠서 아래 코드로 변경하였다.
# a = map(int, input().split())
# sort_a = sorted(a)
# print(sort_a[1])

# # 2523번
# n = int(input())
# for i in range(1, n+1):
#     print('*' * i)
# for i in range(n-1, 0, -1):
#     print('*' * i)

# 2446번
# n = int(input())
# blank = 0
# for i in range(n, 0, -1):
#     print(' ' * blank + '*' * (2*i-1))
#     blank += 1
# blank -= 2
# for i in range(2, n+1, 1):
#     print(' ' * blank + '*' * (2*i-1))
#     blank -= 1

# 10996번
n = int(input())
even = n//2
odd = n - n//2

for i in range(n):
    print('* ' * odd)
    print(' *' * even)
