n, m = map(int, input().split())
li = [[0 for _ in range(n)] for _ in range(n)]
for _ in range(m):
    a, b = map(int, input().split())
    li[a-1][b-1] = a * b
for i in range(n):
    for j in range(n):
        print(li[i][j], end=" ")
    print("")