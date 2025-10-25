data = [int(c) for c in input().split()]
# dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
# ここにプログラムを追記

ans = False
for i in range(5):
    if i == 4:
        continue
    if data[i] == data[i+1]:
        ans = True
        break

if ans:
    print("YES")
else:
    print("NO")