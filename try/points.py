from cs50 import get_int

points = get_int("How many points did you lose? ")
if points > 2:
    print("You lost more points than me.")
elif points < 2:
    print("You lost less points than me.")
else:
    print("You have lost the same number of points as me.")