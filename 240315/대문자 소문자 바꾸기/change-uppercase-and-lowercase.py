s = input()
answer = ""
for c in s:
    asc = ord(c)
    if (asc >= 97):
        answer += chr(asc - 32)
    else:
        answer += chr(asc + 32)
print(answer)