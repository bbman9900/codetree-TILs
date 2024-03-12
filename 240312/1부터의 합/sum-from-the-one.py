n = int(input())
summ = 0
for i in range(1, n + 1):
    if (summ + i > n):
        print(i)
        break
    else:
        summ += i