def main():
        h = get_height()
        for i in range(h):
                print("#"*h)

def get_height():
        while True:
                try:
                        n = int(input("Height: "))
                        if n > 0:
                                break
                except ValueError:
                        print("That's not an integer")
        return n

main()