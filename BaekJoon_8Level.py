# 11654번
n = input()
print(ord(n)) # ord : 문자의 아스키코드값을 반환

# 11720번
a = int(input())
n = list(input())
sum = 0
for i in range(a):
    sum += int(n[i])
print(sum)

# 10809번
s = input()
arr = [-1 for i in range(26)]
for i in range(len(s)):
    if arr[ord(s[i]) - 97] != -1:
        continue
    else:
        arr[ord(s[i]) - 97] = i
for i in range(26):
    print(arr[i], end=' ')

# 2675번
n = int(input())
for i in range(n):
    r, s = input().split()
    r = int(r)
    for j in range(len(s)):
        print(s[j] * r, end='')
    print()

# 1157번
str = input().upper()
arr = [0 for i in range(26)]
for i in range(len(str)):
    arr[ord(str[i]) - 65] += 1
_max = max(arr)
if arr.count(_max) >= 2:
    print("?")
else:
    print(chr(arr.index(_max) + 65))

# 1152번
str = input()
str = str.split()
print(len(str))

# 2908번
a, b = input().split()
a = int(a[::-1])
b = int(b[::-1])
print(max(a, b))

# 5622번
str = input()
time = 0
for i in range(len(str)):
    time += (ord(str[i]) - 65) // 3 + 3
    if str[i] == 'S' or str[i] == 'V' or str[i] == 'Y' or str[i] == 'Z':
        time -= 1
print(time)

# 2941번
a = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
str = input()
for i in a:
    str = str.replace(i, '*')
print(len(str))

# 1316번
n = int(input())
cnt = n
for i in range(n):
    chk = [0 for j in range(26)]
    str = input()
    chk[ord(str[0]) - 97] = 1
    for k in range(1, len(str)):
        if str[k] == str[k - 1]:
            continue
        elif chk[ord(str[k]) - 97] == 1:
            cnt -= 1
            break
        else:
            chk[ord(str[k]) - 97] = 1
print(cnt)

# 1316번 다른방법
cnt = 0
for i in range(int(input())):
    str = input()
    print(sorted(str, key=str.find))
    cnt += list(str) == sorted(str, key=str.find) # key = str.find : 알파벳 순으로 정렬하지 않고 입력된 순서대로 정렬
print(cnt)