N = int(input())
# ここにプログラムを追記

a = list(map(int, input().split()))

sum = 0
for i in range(N):
    sum += a[i]

average = sum // N

for i in range(N):
    print(abs(a[i]-average))