a = input()
b = input()
n = -1
for i in range(0, len(a)):
    a = a[1:] + a[0]
    if (a == b):
        n = i + 1
        break
print(n)