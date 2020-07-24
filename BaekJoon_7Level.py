# # 15596번
# def solve(a):
#     ans = 0
#     for i in a:
#         ans += i
#     return ans
#
# # 4673번
# def check(dn):
#     sum = dn
#     while(1):
#         if dn == 0:
#             break
#         sum += (dn % 10)
#         dn //= 10
#     return sum
#
# chk = []
# for i in list(range(1, 10001)):
#     idx = check(i)
#     if idx < 100001:
#         chk.append(idx)
#     if i not in chk: # not in : 리스트 안에 존재 하지 않으면
#         print(i)

# 1065번
def check(n):
    if n < 100:
        return True
    else:
        n1 = n // 100
        n2 = n % 10
        n3 = (n % 100) // 10
        if (n1-n3) == (n3-n2):
            return True
        else:
            return False
n = int(input())
cnt = 0
for i in range(1, n+1):
    if check(i) == True:
        cnt += 1
print(cnt)



