n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    summ = 0
    if (a % 2 == 1):
        a += 1
    for i in range(a, b + 1, 2):
        summ += i
    print(summ)