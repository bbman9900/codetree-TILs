n = input()
li = list(map(int, input().split()))
m = min(li)
cnt = 0
for i in li:
    if (i == m):
        cnt += 1
print(m, cnt)