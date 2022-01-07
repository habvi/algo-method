n = int(input())
A = list(map(int, input().split()))
cnt = [0] * (max(A) + 1)
for a in A:
    cnt[a] += 1
mx = max(cnt)
for i, c in enumerate(cnt):
    if c == mx:
        print(i)



# from collections import Counter
# n = int(input())
# A = list(map(int, input().split()))
# c = Counter(A)
# mx = c.most_common(1)[0][1]
# ans = []
# for k, v in c.items():
#     if v == mx:
#         ans.append(k)
# ans.sort()
# print("\n".join(map(str, ans)))