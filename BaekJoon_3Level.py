# import sys
# # 2739번
# n = int(input())
#
# for i in range(1, 10):
#     print(n, "*", i, "=", n*i)
#
# # 10950번
# t = int(input())
# for i in range(0, t):
#     a, b = map(int, input().split())
#     print(a+b)
#
# # 8393번
# n = int(input())
# sum = 0
# for i in range(0, n):
#     sum += i+1
# print(sum)
#
# # 15552번
# n = int(input())
# for i in range(n):
#         a, b = map(int, sys.stdin.readline().split())
#         print(a+b)
#
# # 2741번
# n = int(input())
# for i in range(n):
#     print(i+1)
#
# # 2742번
# n = int(input())
# for i in range(n, 0, -1):
#     print(i)
#
# # 11021번
# n = int(input())
# for i in range(n):
#         a, b = map(int, input().split())
#         print("Case #%d: %d" %(i+1, a+b))
#
# # 11022번
# n = int(input())
# for i in range(n):
#         a, b = map(int, input().split())
#         print("Case #%d: %d + %d = %d" % (i+1, a, b, a+b))
#
# # 2438번
# n = int(input())
# for i in range(1, (n + 1)):
#     print('*' * i)
#
# # 2439번
# n = int(input())
# j = n
# for i in range(1, (n + 1)):
#     print(' ' * (n-i) + '*' * i)

# 10871번
n, x = map(int, input().split())
for i in range(n):
    a = list(map(int, input().split()))
for i in range(n):
    if a[i] < x:
        print(a[i], end=' ')
# a를 직접입력하니 백준에서 읽지를 못했다. 그래서 아래코드와 같이 수정
n, x = map(int, input().split())
a = list(map(int, input().split()))

for i in range(n):
    if a[i] < x:
        print(a[i], end=' ')
