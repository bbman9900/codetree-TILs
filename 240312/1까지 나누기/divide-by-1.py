n = int(input())
cnt = 1

while (n / cnt > 1):
    n = n // cnt
    cnt += 1
print(cnt)