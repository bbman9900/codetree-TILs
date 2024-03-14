n, m = map(int, input().split())
li1 = []
for i in range(n):
    s = list(map(int, input().split()))
    li1.append(s)
li2 = [ [0 for _ in range(m)] for _ in range(n) ]
for i in range(n):
    s = list(map(int, input().split()))
    for j in range(m):
        if (li1[i][j] != s[j]):
            li2[i][j] = 1

for i in range(n):
    for j in range(m):
        print(li2[i][j], end=" ")
    print("")