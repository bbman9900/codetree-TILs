n = int(input())
li = list(map(int, input().split()))
cnt = 0
for i, v in enumerate(li):
    if (v == 2):
        cnt += 1
    if (cnt ==3):
        print(i + 1)
        break