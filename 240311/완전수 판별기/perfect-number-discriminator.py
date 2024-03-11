n = int(input())
perfect = 0
for i in range(1, n):
    if (n % i == 0):
        perfect += i
if (n == perfect):
    print("P")
else:
    print("N")