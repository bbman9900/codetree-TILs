n = input()
li = list(map(int, input().split()))
m = min(li)
print(m, str(li).count(str(m)))