a, b, c = map(int, input().split())
ex = "YES"
for i in range(a, b + 1):
    if (i % c == 0):
        ex = "NO"
print(ex)