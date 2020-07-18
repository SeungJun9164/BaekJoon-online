# 10952번
while(1):
    a, b = map(int, input().split())
    if(a == 0 and b == 0):
        break
    else:
        print(a+b)

# 10951번
# try, except : 입력 끝을 알리기 위해 사용 EOF
try:
    while(1):
        a, b = map(int, input().split())
        if(a == 0 and b == 0):
            break
        else:
            print(a+b)
except:
    exit()

# 1110번
n = int(input())
cnt = 0
temp = n
while(1):
    temp = (temp % 10) * 10 + ((temp // 10 + temp % 10) % 10)
    cnt += 1
    if temp == n:
        print(cnt)
        break
