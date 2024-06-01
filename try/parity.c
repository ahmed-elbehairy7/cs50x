#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int n = get_int("n: ");
    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
