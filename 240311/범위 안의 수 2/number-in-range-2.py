summ = 0
cnt = 0
for i in range(0, 10):
    a = int(input())
    if (a >= 0 and a <= 200):
        summ += a
        cnt += 1
print(f"{summ} {round(summ / cnt, 1)}")