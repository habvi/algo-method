N = int(input())
A = [tuple(map(int, input().split())) for _ in range(3)]

INF = float('inf')
dp = [0] * 3
for i in range(1, N):
    ndp = [INF] * 3
    for now in range(3):
        for pre in range(3):
            ndp[now] = min(ndp[now], dp[pre] + abs(A[now][i] - A[pre][i - 1]))
    dp = ndp
print(min(dp))