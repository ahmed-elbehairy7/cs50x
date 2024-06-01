from cs50 import get_string

people = {
    "Ahmed": "+201003816322",
    "Mother": "+201147209471"
}

name = get_string("Name: ")
number = people[name]
print(f"Number: {number}")