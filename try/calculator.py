try:
    x = int(input("x: "))
except ValueError:
    print("That's is not an int")
    exit()
try:
    y = int(input("y: "))
except ValueError:
    print("That's not an int")
    exit()
div = x / y
c_behavior = x // y
print(div)
print(c_behavior)
print(f"{sum:.6f}")