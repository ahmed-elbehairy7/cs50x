#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int determine_grade(string text);

int main(void)
{
    string text = get_string("Text: ");
    int grade = determine_grade(text);
    if (grade < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    if (grade > 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    printf("Grade %i\n", grade);
    return 0;
}

int determine_grade(string text)
{
    float words = 1, letters = 0, sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        else if (isblank(text[i]))
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return round(0.0588 * (letters / words * 100) - 0.296 * (sentences / words * 100) - 15.8);
}