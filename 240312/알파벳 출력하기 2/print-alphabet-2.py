n = int(input())
alp = 65
for i in range(n):
    print("  " * i, end="")
    for j in range(n - i):
        print(chr(alp), end=" ")
        alp = 65 if (alp == 90) else alp + 1
    print("")