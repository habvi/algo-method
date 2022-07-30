N, A, B = map(int, input().split())
X = list(map(int, input().split()))

ndp = [0] * A
ndp[0] = 1
for x in X:
    dp = ndp[:]
    for i in range(A):
        nxt = (i + x) % A
        ndp[nxt] |= dp[i]
ans = ndp[B]
print("Yes" if ans else "No")