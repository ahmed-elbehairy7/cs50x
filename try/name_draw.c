#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.c>

void draw(t);
void draw_letter(l);

int main(void)
{
    string name = get_string("","What's your name?  ");
    tolower(name);
    draw(name);
}

void draw(string t)
{
    int n = strlen(t);

    for (int i = 0; i < n; i++)
    {
        draw_letter(t[i]);
    }
}

void draw_letter(l)
{
    if (l == 'a')
    {
        printf("      __      ");
        printf("     /  \     ");
        printf("    / /\ \    ");
        printf("   / /  \ \   ");
        printf("  / /____\ \  ");
        printf(" / /______\ |")
    }
}
