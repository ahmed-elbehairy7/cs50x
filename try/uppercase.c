#include<stdio.h>
#include<cs50.c>
#include<string.h>
#include<ctype.h>

int main(void)
{
    string s = get_string("", " before: ");
    printf("AFTER: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
            printf("%c", toupper(s[i]));
    }
    printf("\n");
}
