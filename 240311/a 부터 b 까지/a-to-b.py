s = input()
a, b = s.split()
a = int(a)
b = int(b)
while a <= b:
    if (a % 2 != 0):
        print(a, end=" ")
        a = a * 2
    else:
        print(a, end=" ")
        a = a + 3