n1, n2 = map(int, input().split())
seq = [n1, n2]
for i in range(2, 10):
    seq.append(seq[i-1] + 2* seq[i-2])
for i in seq:
    print(i, end=" ")