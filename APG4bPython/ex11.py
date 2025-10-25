S = input()
# ここにプログラムを追記

ans = 1

N = len(S)
for i in range(N):
    if i%2 == 0:
        continue
    elif S[i]=="+":
        ans += 1
    else:
        ans -= 1

print(ans)