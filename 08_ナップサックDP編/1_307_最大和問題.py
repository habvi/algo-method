N = int(input())
A = list(map(int, input().split()))

INF = float('inf')
dp = [-INF] * (N + 1)
dp[0] = 0
for i, a in enumerate(A, 1):
    dp[i] = dp[i - 1] + max(0, a)
print(dp[-1])



# -----------------------------------
N = int(input())
A = list(map(int, input().split()))

ans = sum(a for a in A if a > 0)
print(ans)