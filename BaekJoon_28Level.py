# 1260번
def dfs(start):
    print(start, end=' ')
    visit[start] = 1
    for i in range(1, n+1):
        if visit[i] == 0 and s[start][i] == 1:
            dfs(i)

def bfs(start):
    queue = [start]
    visit[start] = 0
    while queue:
        start = queue.pop(0)
        print(start, end=' ')
        for i in range(1, n+1):
            if visit[i] == 1 and s[start][i] == 1:
                queue.append(i)
                visit[i] = 0

n, m, v = map(int, input().split())
s = [[0] * (n+1) for i in range(n+1)]
visit = [0 for i in range(n+1)]
for i in range(m):
    x, y = map(int, input().split())
    s[x][y] = 1
    s[y][x] = 1
dfs(v)
print()
bfs(v)
