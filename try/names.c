#include <stdio.h>
#include <cs50.c>
#include <string.h>

int main(void)
{
    string name[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(name[i], "Ron") == 0)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}
