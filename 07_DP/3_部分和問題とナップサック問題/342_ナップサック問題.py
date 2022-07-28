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



# -------------------------------------
N, M = map(int, input().split())
W = list(map(int, input().split()))
V = list(map(int, input().split()))

INF = float('inf')
ndp = [-INF] * (M + 1)
ndp[0] = 0
for w, v in zip(W, V):
    dp = ndp[:]
    for i in range(M + 1):
        if i + w <= M:
            ndp[i + w] = max(ndp[i + w], dp[i] + v)
print(max(ndp))