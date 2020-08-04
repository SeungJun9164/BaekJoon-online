# 1978번
chk = [False for i in range(1001)]
chk[0] = True
chk[1] = True
for i in range(2, 1001):
    for j in range(2, 1001):
        if i * j >= 1001:
            break
        if not chk[i * j]:
            chk[i * j] = True
        else:
            continue
n = int(input())
cnt = 0
num_list = list(map(int, input().split()))
for i in num_list:
    if chk[i] == False:
        cnt += 1
print(cnt)

# 2581번
chk = [False for i in range(10001)]
chk[0] = True
chk[1] = True
for i in range(2, 10001):
    for j in range(2, 10001):
        if i * j >= 10001:
            break
        if not chk[i * j]:
            chk[i * j] = True
        else:
            continue

m = int(input())
n = int(input())
_sum = 0
_min = n
for i in range(m, n + 1):
    if not chk[i]:
        _sum += i
        _min = min(_min, i)
if _sum == 0:
    print("-1")
else:
    print(_sum, _min, sep='\n')

# 1929번
chk = [False for i in range(1000001)]
chk[0] = True
chk[1] = True
for i in range(2, 1000001):
    for j in range(2, 1000001):
        if i * j >= 1000001:
            break
        if not chk[i * j]:
            chk[i * j] = True
        else:
            continue
m, n = map(int, input().split())
for i in range(m, n+1):
    if not chk[i]:
        print(i)

# 4948번
chk = [False for i in range(246913)]
chk[0] = True
chk[1] = True
for i in range(2, 246913):
    for j in range(2, 246913):
        if i * j >= 246913:
            break
        if not chk[i * j]:
            chk[i * j] = True
        else:
            continue

while True:
    cnt = 0
    n = int(input())
    if n == 0:
        break
    for i in range(n + 1, 2 * n + 1):
        if not chk[i]:
            cnt += 1
    print(cnt)

# 9020번
chk = [False for i in range(10001)]
chk[0] = True
chk[1] = True
for i in range(2, 10001):
    for j in range(2, 10001):
        if i * j >= 10001:
            break
        if not chk[i * j]:
            chk[i * j] = True
        else:
            continue

t = int(input())
for i in range(t):
    n = int(input())
    down = n // 2
    up = n // 2
    while True:
        if chk[down] == False and chk[up] == False:
            print(down, up)
            break
        else:
            down -= 1
            up += 1
