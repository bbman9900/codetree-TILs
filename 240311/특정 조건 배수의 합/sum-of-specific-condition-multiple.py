a, b = map(int, input().split())
if (a > b):
    c = a
    a = b
    b = c
summ = 0
for i in range(a, b + 1):
    if (i % 5 == 0):
        summ += i
print(summ)