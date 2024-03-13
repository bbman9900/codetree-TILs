a, b = map(int, input().split())
li = [0] * b
summ = 0
while a > 1:
    li[a % b] += 1
    a //= b
for i in li:
    summ += i ** 2
print(summ)