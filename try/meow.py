from cs50 import get_int

def main():
            x = get_int("x: ")
            meow(x)

def meow(n):
    for i in range(n):
            print("meow")

main()