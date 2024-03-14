n = int(input())
li = list(map(int, input().split()))
while True:
    mx = max(li[: n - 1])
    n = li.index(mx) + 1
    print(n, end=" ")
    if (n == 1):
        break