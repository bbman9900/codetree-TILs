n = int(input())
num = 0
for i in range(1, n + 1):
    for j in range(1, n + 1):
        if (i % 2 == 1):
            num += 1
        else:
            num += 2
        print(num, end=" ")
    print("")