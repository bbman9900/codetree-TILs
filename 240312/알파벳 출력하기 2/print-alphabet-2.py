n = int(input())
alp = 65
for i in range(n):
    print("  " * i, end="")
    for j in range(n - i):
        print(chr(alp), end=" ")
        alp += 1
    print("")