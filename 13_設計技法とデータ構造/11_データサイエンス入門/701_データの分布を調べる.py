n = int(input())
A = list(map(int, input().split()))
T = [0] * 5
for a in A:
    i = max(0, (a - 1) // 20)
    T[i] += 1
    
for t in T:
    print(t)