a = int(input())
b, c, d, e = map(int, input().split())

for i in [b, c, d, e]:
    if (a > i):
        print(1)
    else:
        print(0)