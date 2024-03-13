n, m = map(int, input().split())
num = [0] * m
num = list(map(int, input().split()))
cnt = 0
for i in num:
    if (i == m):
        cnt += 1
print(cnt)