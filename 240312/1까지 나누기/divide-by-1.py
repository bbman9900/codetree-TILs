n = int(input())
cnt = 0

while True :
    cnt += 1
    n = n // cnt
    if (n <= 1 or n == 0):
        break
print(cnt)