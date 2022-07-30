N = int(input())
W = list(map(int, input().split()))

total = sum(W)
dp = [0] * (total + 1)
dp[0] = 1
for w in W:
    for i in reversed(range(total + 1)):
        nxt = i + w
        if nxt <= total:
            dp[nxt] |= dp[i]

ans = float('inf')
for i, x in enumerate(dp):
    if x:
        ans = min(ans, abs(i - (total - i)))
print(ans)