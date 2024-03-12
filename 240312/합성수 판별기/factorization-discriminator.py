n = int(input())
composite_number = "N"
for i in range(2, n):
    if (n % i == 0):
        composite_number = "C"
        break
print(composite_number)