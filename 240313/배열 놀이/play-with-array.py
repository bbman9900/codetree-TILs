n, q = map(int, input().split())
li = list(map(int, input().split()))
for _ in range(n):
    s = list(map(int, input().split()))
    if len(s) > 2:
        num, a, b = s[0], s[1], s[2]
    else:
        num, a = s[0], s[1]
    if (num == 1):
        print(li[a - 1])
    elif (num == 2):
        print(li.index(a) + 1 if (a in li) else 0)
    else:
        for i in range(a - 1, b):
            print(li[i], end=" ")