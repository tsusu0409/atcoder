N, M = map(int, input().split())
AB = [list(map(int, input().split())) for i in range(M)]

# ここにコードを追記する
R = [["-"] * N for _ in range(N)]

for a, b in AB:
    a -= 1
    b -= 1
    R[a][b] = "o"
    R[b][a] = "x"

for i in range(N):
    print(*R[i])