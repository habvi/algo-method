N, M = map(int, input().split())
W = list(map(int, input().split()))

INF = float('inf')
dp = [INF] * (M + 1)
dp[0] = 0
for w in W:
    for i in reversed(range(M + 1)):
        nxt = i + w
        if nxt <= M:
            dp[nxt] = min(dp[nxt], dp[i] + 1)
ans = dp[-1]
print(ans if ans != INF else -1)