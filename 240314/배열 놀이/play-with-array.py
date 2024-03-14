n, q = map(int, input().split())
li = input().split()
for _ in range(q):
    s = input()
    if (s[0] == "1"):
        print(li[int(s[2]) - 1])
    elif (s[0] == "2"):
        if (s[2] in li):
            print(li.index(s[2]) + 1)
        else:
            print(0)
    elif (s[0] == "3"):
        a = int(s[2]) - 1
        b = int(s[4])
        for i in range(a, b):
            print(li[i], end=" ")