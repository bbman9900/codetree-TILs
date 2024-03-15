s = input()
order = input()
l, r, gap = 0, 0, 0
for c in order:
    if (c == "L"):
        l += 1
    else:
        r += 1
if (l > r):
    gap = l - r
else :
    gap = r - l
if (gap >= len(s)):
    gap %= len(s)
print(s[gap:] + s[:gap])