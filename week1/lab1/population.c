#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start = 0, end = 0;
    do
    {
        start = get_int("start size: ");
    }
    while (start < 9);

    do
    {
        end = get_int("end size: ");
    }
    while (end < start);

    int years = 0;
    while (start < end)
    {
        start = start + start / 3 - start / 4;
        years++;
    }

    printf("Years: %i\n", years);
}
