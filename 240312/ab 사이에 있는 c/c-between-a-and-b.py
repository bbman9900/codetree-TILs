a, b, c = map(int, input().split())
ex = "NO"
for i in range(a, b + 1):
    if (i % c == 0):
        ex = "YES"
print(ex)