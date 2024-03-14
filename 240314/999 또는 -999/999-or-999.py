li = list(map(int, input().split()))
li.remove(li[-1])
print(max(li), min(li))