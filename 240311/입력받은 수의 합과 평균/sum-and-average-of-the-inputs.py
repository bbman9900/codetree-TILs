n = int(input())
summ = 0
for i in range(0, n):
    summ += int(input())
print(f"{summ} {round(summ / n, 1)}")