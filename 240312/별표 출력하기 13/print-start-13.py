n = int(input())
i = 0
for _ in range(n):
    print("* " * (n - i))
    i += 1
    print("* " * i)