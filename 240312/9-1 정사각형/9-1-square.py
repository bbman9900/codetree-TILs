n = int(input())
num = 9
for _ in range(n):
    for _ in range(n):
        print(num, end="")
        if (num == 1):
            num = 9
        else:
            num -= 1
    print("")