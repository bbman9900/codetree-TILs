n = int(input())
car = list(map(int, input().split()))
money = 0
for i in range(n):
    for j in range(i, n):
        a = car[j] - car[i] 
        if (a > money):
            money = a
print(money)