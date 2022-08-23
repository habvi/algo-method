N, M, K = map(int, input().split())
A = list(map(int, input().split()))

INF = float('inf')
dp = [INF] * (M + 1)
dp[0] = 0
for a in A:
    for i in reversed(range(M + 1)):
        nxt = i + a
        if nxt <= M:
            dp[nxt] = min(dp[nxt], dp[i] + 1)
ans = dp[-1]
print("Yes" if ans <= K else "No")