n, q = map(int, input().split())
li = input().split()
for _ in range(q):
    s = list(map(int, input().split()))
    if (s[0] == 1):
        print(li[s[1] - 1])
    elif (s[0] == 2):
        if (str(s[1]) in li):
            print(li.index(str(s[1])) + 1)
        else:
            print(0)
    elif (s[0] == 3):
        for i in range(s[1] - 1, s[2]):
            print(li[i], end=" ")
        print("")