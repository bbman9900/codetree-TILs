summ = 0
cnt = 0
while True:
    age = input()
    if (age[0] != '2'):
        print(f"{round(summ / cnt, 2):.2f}")
        break
    summ += int(age)
    cnt += 1