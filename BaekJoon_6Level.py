# # 10818번
# n = int(input())
# arr = list(map(int, input().split()))
# print(min(arr), max(arr)) # max, min : 최대, 최소값 구하는 함수

# # 2562번
# n = []
# for i in range(9):
#     n.append(int(input()))
# max = n[0]
# cnt = 0
# for i in range(9):
#     if max <= n[i]:
#         max = n[i]
#         cnt = i + 1
# print(max)
# print(cnt)

# # 2577번
# a = int(input())
# b = int(input())
# c = int(input())
# mul = list(str(a * b * c))
#
# for i in range(10):
#     print(mul.count(str(i)))

# 3052번
n = []
for i in range(10):
    _n = int(input())
    n.append(_n % 42)
n = set(n) # set : 중복을 제거한 집합 자료형
print(len(n))

