three = 0
five = 0
for i in range(1, 11):
    n = int(input())
    if (n % 3 == 0):
        three += 1
    if (n % 5 == 0):
        five += 1
print(f"{three} {five}")