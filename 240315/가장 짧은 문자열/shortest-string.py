mx = 0
mn = 2100000000
s1 = input()
s2 = input()
s3 = input()
for s in [s1, s2, s3]:
    if (len(s) > mx):
        mx = len(s)
    if (len(s) < mn):
        mn = len(s)
print(mx - mn)