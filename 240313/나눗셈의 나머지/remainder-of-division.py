a, b = map(int, input().split())
li = []
summ = 0
for _ in range(b):
    li.append(0)
while a >= b:
    li[a % b] += 1
    a //= b
li[a] += 1
for i in li:
    summ += i * i
print(summ)