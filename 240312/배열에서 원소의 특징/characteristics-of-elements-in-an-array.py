li = list(map(int, input().split()))
pre = 0
for i in li:
    if (i % 3 == 0):
        print(pre)
        break
    pre = i