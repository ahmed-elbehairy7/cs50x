#include <stdio.h>
#include <cs50.c>
#include <string.h>

int main(void)
{
    char *s = get_string("","s: ");
    char *t = get_string("","t: ");
    int n = strlen(s);
    int m = strlen(t);

    if(n != m || *s != *t)
    {
        printf("different");
    }

    else
    {
        for (int i=0; i < n; i++)
        {
            if(s[i] == t[i])
            {
                printf("same");
            }
            else
            {
                printf("Different");

            }
        }
    }
}
