N = int(input())
A = int(input())

roop = True

for i in range(N):
    op, B = input().split()
    B = int(B)

    if op == "+":
        A += B

    if op == "-":
        A -= B

    if op == "*":
        A *= B

    if op == "/":
        if B == 0:
            print("error")
            roop = False
            break
        else:
            A //= B

    print(i+1, A)