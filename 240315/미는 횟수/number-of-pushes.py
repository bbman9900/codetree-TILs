a = input()
b = input()
n = -1
for i in range(len(a)):
    if (a[:i] + a[i:] == b):
        n = i
        break
print(n)