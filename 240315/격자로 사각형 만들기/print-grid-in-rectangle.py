n = int(input())
li = [[0 for _ in range(n)] for _ in range(n)]
for i in range(n):
    for j in range(n):
        if (i == 0 or j == 0):
            li[i][j] = 1
        else:
            li[i][j] = li[i-1][j] + li[i][j-1] + li[i-1][j-1]
for i in range(n):
    for j in range(n):
        print(li[i][j], end=" ")
    print("")