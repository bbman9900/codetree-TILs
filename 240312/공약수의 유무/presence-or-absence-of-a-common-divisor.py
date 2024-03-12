a, b = map(int, input().split())
common_divisor = []
ex = 0
for i in range(1, 1441):
    if (1920 % i == 0 and 2880 % i == 0):
        common_divisor.append(i)

for i in common_divisor:
    if (i in range(a, b + 1)):
        ex = 1
        break
print(ex)