n = int(input())
decimal = "P"
for i in range(2, n // 2):
    if (n % i == 0):
        decimal = "C"
        break
print(decimal)