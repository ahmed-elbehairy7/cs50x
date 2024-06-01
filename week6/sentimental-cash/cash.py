from cs50 import get_float

while True:
    coins = get_float("change: ") * 100
    if coins >= 0:
        break
n = 0

for num in [25, 10, 5, 1]:
    while True:
        if not coins >= num:
            break
        coins -= num
        n += 1

print(n)
