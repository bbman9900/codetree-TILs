n = int(input())
for i in range(n, 0, -1):
    for j in range(1, i + 1):
        if (j != 1):
            print("/", end=" ")
        print(f"{n - i + 1} * {j} = {(n - i + 1) * (j)}", end=" ")
    print("")