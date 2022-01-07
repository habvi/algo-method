n = int(input())
A = list(map(int, input().split()))
ans = [0] * 5
for a in A:
    i = max(0, (a - 1) // 20)
    ans[i] += 1
    
for a in ans:
    print(a)