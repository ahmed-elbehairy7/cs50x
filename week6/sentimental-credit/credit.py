# from cs50 import get_string


def main():

    number = input("Number: ")

    if not checksum(number):
        print("INVALID")
        return

    first_two = f"{number[0]}{number[1]}"

    if first_two in ['34', '37'] and len(number) == 15:
        print("AMEX")
    elif int(first_two) in list(range(51, 56)) and len(number) == 16:
        print("MASTERCARD")
    elif first_two.startswith('4') and len(number) in [13,16]:
        print("VISA")
    else:
        print("INVALID")


def checksum(number):

    total = 0

    for i in range(len(number)):
        last_num = int(number[-1])
        number = number[:-1]
        if i % 2 == 0:
            total += last_num
            continue

        else:
            last_num *= 2

        if last_num >= 10:
            last_num = str(last_num)
            total += int(last_num[0]) + int(last_num[1])
            continue

        total += last_num

    return not total % 10

if __name__ == "__main__":
    main()
