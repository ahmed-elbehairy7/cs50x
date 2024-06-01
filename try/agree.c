#include <stdio.h>
#include <cs50.c>

int main(void)
{
    string agreement = get_string("", "Do you agree?  ");

    if (agreement == "yes")
    {
        printf("agreed\n");
    }
    else if (agreement == "no")
    {
        printf("Not agreed\n");
    }
    else
    {
        printf("Please answer with yes or no only");
    }
}
