# 2557번
print("Hello World!")

# 10718번
print("강한친구 대한육군")
print("강한친구 대한육군")

# 10171번
print("\    /\\")
print(" )  ( ')")
print("(  /  )")
print(" \\(__)|")

# 10172번
print("|\_/|")
print("|q p|   /}")
print('( 0 )"""\\')
print('|"^"`    |')
print('||_/=\\\__|')

# 1000번
a, b = input().split() # 파이썬은 split으로 구분해주어야 한다.
# a와 b는 문자열로 분리되기 때문에 int형변환 필수!
print(int(a) + int(b))

# 1001번
a, b = input().split()
print(int(a) - int(b))

# 10998번
a, b = input().split()
print(int(a) * int(b))

# 1008번
a, b = input().split()
print(int(a) / int(b))

# 10869번
a, b = input().split()
a = int(a)
b = int(b)
print(a + b)
print(a - b)
print(a * b)
print(int(a / b))
print(a % b)

# 10430번
a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)
print((a+b) % c)
print(((a%c) + (b%c))%c)
print((a*b) % c)
print(((a%c) * (b%c))%c)

# 2558번
a, b = input().split()
a = int(a)
b = int(b)
print(int(a * (b % 10)))
print(int((a * (b % 100 - (b % 10)) / 10)))
print((a * int((b / 100))))
print(a * b)

# 위의 코드가 처음에 작성한 코드인데, 런타임에러가 떠서 찾아서 바꾼 코드가 아래 코드

a = input()
b = input()
a = int(a)
b = int(b)
print(a * (b % 10))
print(a * ((b % 100) // 10)) # / : 결과가 float형 // : 결과가 int형
print(a * (b // 100))
print(a * b)
