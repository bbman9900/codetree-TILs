a = input()
b = input()
n = -1
for i in range(1, len(a)):
    if (a[i:] + a[:i] == b):
        n = i
        break
print(n)