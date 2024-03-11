a, b = map(int, input().split())
pl = a + b
mi = b - a
if (pl % 2 == 1):
    print(pl * (mi- 1))
else:
    print(pl * (mi - 2) + mi)