A, op, B = input().split()
A = int(A)
B = int(B)

if op == "+":
    print(A + B)

# ここにプログラムを追記
if op == "-":
    print(A-B)

if op == "*":
    print(A*B)

if op == "/":
    if B == 0:
        print("error")
    else:
        print(A//B)

if op == "?" or op == "=" or op == "!":
    print("error")
