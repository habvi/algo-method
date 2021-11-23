n, m = map(int, input().split())
a = list(map(int, input().split()))
MOD = 1000
dp = [[0]*(m+1) for _ in range(n+1)]
dp[0][0] = 1
for i in range(n):
    for j in range(m+1):
        dp[i+1][j] += dp[i][j]
        if j-a[i] >= 0: dp[i+1][j] += dp[i][j-a[i]]
        dp[i+1][j] %= MOD
print(dp[n][m])