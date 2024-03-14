n = input()
dup = [0] * 1001
num = []
li = list(map(int, input().split()))
for i in li:
    if (dup[i] < 1):
        dup[i] += 1
for i, v in enumerate(dup):
    if (v == 1):
        num.append(i)
print(max(num))