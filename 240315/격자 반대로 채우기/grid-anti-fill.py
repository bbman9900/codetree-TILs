n = int(input())
num = [i for i in range(1, n * n + 1)]
cnt = 0
sq = [[0 for _ in range(n)] for _ in range(n)]
remain = n % 2

for i in range(n - 1, -1, -1):
    if (i % 2 != remain):
        for j in range(n - 1, -1, -1):
            sq[j][i] = num[cnt]
            cnt += 1
    else:
        for j in range(0, n):
            sq[j][i] = num[cnt]
            cnt += 1

for i in range(n):
    for j in range(n):
        print(sq[i][j], end=" ")
    print("")