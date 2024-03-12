n = int(input())
s = input().split()
even = []
for i in s:
    if (int(i) % 2 == 0):
        even.append(int(i))
even.reverse()
for i in even:
    print(i, end=" ")