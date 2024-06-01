#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int number[] = {4, 6, 8, 2, 7, 5, 0};

    for (int i = 0; i < 7; i++)
    {
        if (number[i] == 0)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}
