N, S = map(int, input().split())

A = list(map(int, input().split()))
P = list(map(int, input().split()))

ans = 0
for i in range(N):
    for j in range(N):
        if A[i]+P[j] == S:
            ans += 1

print(ans)