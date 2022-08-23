N, W = map(int, input().split())

INF = float('inf')
dp = [-INF] * (W + 1)
dp[0] = 0
for _ in range(N):
    w, v = map(int, input().split())
    for i in reversed(range(W + 1)):
        nxt = i + w
        if nxt <= W:
            dp[nxt] = max(dp[nxt], dp[i] + v)
print(max(dp))