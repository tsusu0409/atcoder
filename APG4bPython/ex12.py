N = int(input())  # 生徒の数Nを読み込む
T = list(map(int, input().split()))  # 各生徒のゴールまでの時間を読み込む
# ここにプログラムを追記

new_T = sorted(T)
minT = new_T[0]

for i in range(len(T)):
    if T[i] == minT:
        print(i+1)
        break