n = int(input())
num = list(map(int, input().split()))
mn = 100
for i in range(0,n-1):
    a = num[i+1] - num[i]
    if (a < mn):
        mn = a
print(mn)