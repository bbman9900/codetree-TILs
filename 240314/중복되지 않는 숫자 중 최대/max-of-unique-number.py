n = input()
dup = [0] * 1001
num = []
mx = 0
li = list(map(int, input().split()))
for i in li:
    dup[i] += 1
for i, v in enumerate(dup):
    if (v == 1):
        mx = i
print(mx)