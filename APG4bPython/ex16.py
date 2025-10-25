# 入力
N, K = map(int, input().split())
S = input().split()

# K文字以上の単語を抽出
result = [word for word in S if len(word) >= K]

# 空白区切りで出力
print(*result)
