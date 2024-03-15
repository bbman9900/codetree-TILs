n = int(input())
summ = 0
for _ in range(n):
    summ += int(input())
print(str(summ)[1:] + str(summ)[0])