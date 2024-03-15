s1 = input()
s2 = input()
number = list(map(str, range(10)))
num1 = ""
num2 = ""
for c in s1:
    if (c in number):
        num1 += c
for c in s2:
    if (c in number):
        num2 += c
print(int(num1) + int(num2))