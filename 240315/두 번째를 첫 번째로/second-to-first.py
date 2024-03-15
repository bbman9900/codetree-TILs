s = input()
first = s[0]
second = s[1]
answer = ""
for c in s:
    if (c == second):
        answer += first
    else:
        answer += c
print(answer)