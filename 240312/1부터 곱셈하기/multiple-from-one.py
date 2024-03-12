n = int(input())
mul = 1
for i in range(1, 10):
    if (mul * i >= n):
        print(i)
        break
    else:
        mul *= i