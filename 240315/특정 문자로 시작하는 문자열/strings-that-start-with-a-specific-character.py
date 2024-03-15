n = int(input())
ss = []
cnt = 0
lensum = 0
for _ in range(n):
    ss.append(input())
c = input()
for i in ss:
    if (i[0] == c):
        cnt += 1
        lensum += len(i)
print(f"{cnt} {round(lensum / cnt, 2) :.2f}")