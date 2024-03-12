n = int(input())
space = 0
for i in range(n, 0, -1):
    print("*" * i, end="")
    print(" " * space, end= "")
    print("*" * i, end="")
    print("")
    space += 2