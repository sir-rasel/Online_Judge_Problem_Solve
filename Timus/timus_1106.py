def dfs(start, visit, adj):
    visit[start] = True
    for to in adj[start]:
        if to != 0 and not visit[to - 1]:
            mark[to - 1] = (mark[start] + 1) % 2
            dfs(to - 1, visit, adj)

n = int(input())
adj = list()

for i in range(n):
    adj.append(list(map(int, input().split())))

visit = [False] * n
mark = [0] * n
ans = list()

for i in range(n):
    if not visit[i]:
        dfs(i, visit, adj)

for i in range(n):
    if mark[i] == 0:
        ans.append(i+1)

print(len(ans))
print(*ans)