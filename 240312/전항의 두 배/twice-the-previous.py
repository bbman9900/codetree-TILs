n1, n2 = map(int, input().split())

# seq = [n1, n2]
# for i in range(2, 10):
#     seq.append(seq[i-1] + 2* seq[i-2])
# for i in seq:
#     print(i, end=" ")

print(n1, n2, end=" ")
for _ in range(8):
    temp = n2 + 2 * n1
    n1 = n2
    n2 = temp
    print(temp, end=" ")