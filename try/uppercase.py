from cs50 import get_string

before = get_string("Before: ")
print(f"After: {before.upper()}")

#----OR----

print("After: ", end="")
for c in before:
    print(c.upper(), end="")
print()

#----OR----

print("After: " + before.upper())