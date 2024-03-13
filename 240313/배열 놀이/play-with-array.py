n, q = map(int, input().split())
li = list(map(int, input().split()))
for _ in range(q):
    s = list(map(int, input().split()))
    if (s[0] == 1):
        print(li[s[1] - 1])
    elif (s[0] == 2):
        if s[1] in li:
            print(li.index(s[1]) + 1)
        else:
            print(0)
    else:
        for i in range(s[1], s[2] + 1):
            print(li[i - 1], end=" ")