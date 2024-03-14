n = int(input())
li = list(map(int, input().split()))
while True:
    mx = max(li[: n])
    n = li.index(mx)
    print(n+1, end=" ")
    if (n == 0):
        break