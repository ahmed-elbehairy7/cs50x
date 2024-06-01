#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int points = get_int("How many points did you lose?  ");
    const int MINE = 2;
    if (points > MINE)
    {
        printf("you lost more points than me\n");
    }
    else if (points < MINE)
    {
        printf("You lost less points than me\n");
    }
    else
    {
        printf("You lost the same number of points as me\n");
    }
}
