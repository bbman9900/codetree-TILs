a, b = map(int, input().split())
pl = a + b
mi = b - a
if (pl % 2 == 1):
    print(pl * (pl // 2 - 1))
else:
    print(pl * (pl // 2 - 2) + mi)