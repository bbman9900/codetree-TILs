n = int(input())
print("* " * n)
for i in range(1, n):
    print("* " * i, end="")
    print("  " * (n - 1 - i), end="")
    print("*")