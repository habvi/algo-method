from collections import Counter
n = int(input())
A = list(map(int, input().split()))
c = Counter(A)
mx = c.most_common(1)[0][1]
ans = []
for k, v in c.items():
    if v == mx:
        ans.append(k)
ans.sort()
print("\n".join(map(str, ans)))