s = input()
order = input()
l, r = 0, 0
for c in order:
    if (c == "L"):
        l += 1
    else:
        r += 1
print(s[(l-r):] + s[:(l-r)])