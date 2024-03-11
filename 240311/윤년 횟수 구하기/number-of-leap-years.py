leap = 0
n = int(input())
for i in range(1, n + 1):
    if (i % 4 == 0):
        leap += 1
        if (i % 100 == 0 and i % 400 != 0):
            leap -= 1
print(leap)