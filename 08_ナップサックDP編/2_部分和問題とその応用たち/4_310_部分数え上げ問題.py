N, M = map(int, input().split())
A = list(map(int, input().split()))
MOD = 1000

dp = [0] * (M + 1)
dp[0] = 1
for a in A:
    for i in reversed(range(M + 1)):
        nxt = i + a
        if nxt <= M:
            dp[nxt] += dp[i]
            dp[nxt] %= MOD
print(dp[-1])