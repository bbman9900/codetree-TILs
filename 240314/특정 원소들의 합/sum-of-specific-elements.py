summ = 0
for i in range(4):
    num = list(map(int, input().split()))
    for j in range(i+1):
        summ += num[j]
print(summ)