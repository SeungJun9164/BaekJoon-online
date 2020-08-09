# # 10872번
# def _factorial(n):
#     if n <= 1:
#         return 1
#     else:
#         return n * _factorial(n - 1)
#
# print(_factorial(int(input())))

# # 10872번 파이썬기본 함수
# import math
#
# print(math.factorial(int(input())))

# # 10870번
# def fibonacci(n):
#     if n == 0:
#         return 0
#     elif n == 1:
#         return 1
#     else:
#         return fibonacci(n - 1) + fibonacci(n - 2)
#
# print(fibonacci(int(input())))

# # 2447번
# num = int(input())
#
# def star(i, j):
#     while i != 0:
#         # 몫이 1인 경우
#         if i % 3 == 1 and j % 3 == 1:
#             print(' ', end='')
#             return None
#         # 3으로 나누어서 위의 if문에 걸리면 그 부분도 빈칸 처리
#         i = i // 3
#         j = j // 3
#     print('*', end='')
#
# for i in range(num):
#     for j in range(num):
#             star(i, j)
#     print()

# 11729번
def hanoi(n, a, b, c):
    if n == 1:
        print(a, c)
    else:
        hanoi(n - 1, a, c, b)
        print(a, c)
        hanoi(n - 1, b, a, c)

n = int(input())
sum = 1
for i in range(n - 1):
    sum = sum * 2 + 1
print(sum)
hanoi(n, 1, 2, 3)