a = input()
b = input()
n = -1
for i in range(0, len(a)):
    a = a[1:] + a[0]
    n = i + 1
    if (a == b):
        break
print(n)