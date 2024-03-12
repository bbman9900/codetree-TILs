cnt = 0
while (cnt < 3):
    a = int(input())
    if (a % 2 == 1):
        continue
    print(a // 2)
    cnt += 1