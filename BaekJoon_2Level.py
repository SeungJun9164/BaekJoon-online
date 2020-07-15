# # 1330번
# a, b = input().split()
# a = int(a)
# b = int(b)
# if a > b:
#     print('>')
# elif a < b:
#     print('<')
# elif a == b:
#     print("==")
#
# # 9498번
# a = int(input())
#
# if a <= 100 and a >= 90:
#     print('A')
# elif a <= 89 and a >= 80:
#     print('B')
# elif a <= 79 and a >= 70:
#     print('C')
# elif a <= 69 and a >= 60:
#     print('D')
# else:
#     print('F')
#
# # 2753번
# year = int(input())
# if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
#     print(1)
# else:
#     print(0)
#
# # 14681번
# x = int(input())
# y = int(input())
#
# if x > 0 and y > 0:
#     print(1)
# elif x < 0 and y > 0:
#     print(2)
# elif x < 0 and y < 0:
#     print(3)
# elif x > 0 and y < 0:
#     print(4)

# 2884번
h, m = map(int, input().split())

if h > 0:
    if m < 45:
        h = h - 1
        m = 60 + m - 45
    elif m >= 45:
        m = m - 45
elif h == 0:
    if m < 45:
        h = 23
        m = 60 + m - 45
    elif m >= 45:
        m = m - 45
print(h, m)
