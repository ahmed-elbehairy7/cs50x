#!/usr/local/bin/python3

from cs50 import get_string


def main():
    text = get_string("Text: ")
    grade = calc_grade(text)

    if grade < 1:
        print("Before Grade 1")
    elif grade >= 16:
        print("Grade 16+")
    else:
        print(f"Grade {round(grade)}")


def calc_grade(text):
    letters = 0
    for letter in text:
        if letter.isalpha():
            letters += 1

    words = len(text.split())
    sentences = text.count('.') + text.count('!') + text.count('?')

    L = letters / words * 100
    S = sentences / words * 100

    return 0.0588 * L - 0.296 * S - 15.8


main()
