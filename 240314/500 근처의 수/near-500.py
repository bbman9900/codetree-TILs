num = list(map(int, input().split()))
mx = 0
mn = 1000
for i in num:
    if (i < 500 and i > mx):
        mx = i
    elif (i > 500 and i < mn):
        mn = i
print(mx, mn)