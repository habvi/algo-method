N, M = map(int, input().split())
A = list(map(int, input().split()))

dp = [0] * (M + 1)
dp[0] = 1
for a in A:
    for i in reversed(range(M + 1)):
        nxt = i + a
        if nxt <= M:
            dp[nxt] |= dp[i]
print("Yes" if dp[-1] else "No")