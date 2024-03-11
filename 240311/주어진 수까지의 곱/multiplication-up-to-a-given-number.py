a, b = map(int, input().split())
multi = a
for i in range(a + 1, b + 1):
    multi *= i
print(multi)