N, M = map(int, input().split())
W = list(map(int, input().split()))
V = list(map(int, input().split()))

INF = float('inf')
dp = [-INF] * (M + 1)
dp[0] = 0
for w, v in zip(W, V):
    for i in reversed(range(M + 1)):
        if i + w <= M:
            dp[i + w] = max(dp[i + w], dp[i] + v)
print(max(dp))