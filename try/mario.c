#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int n;
    do
    {
            n = get_int("size: ");
    }
    while (n < 1);

    //For each row
    for (int i = 0; i < n; i++)
    {
        //For each column
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }

        //move to next row
        printf("\n");
    }
}
