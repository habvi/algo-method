N, M = map(int, input().split())

INF = float('inf')
dp = [INF] * (M + 1)
dp[0] = 1
for _ in range(N):
    a, b = map(int, input().split())
    ndp = [INF] * (M + 1)
    for i in range(M + 1):
        if dp[i] != INF:
            ndp[i] = 0
        if ndp[i] == b:
            continue
        nxt = i + a
        if nxt <= M:
            ndp[nxt] = min(ndp[nxt], ndp[i] + 1)
    dp = ndp
ans = dp[-1]
print("Yes" if ans != INF else "No")