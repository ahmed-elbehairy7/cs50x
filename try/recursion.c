#include <stdio.h>
#include <cs50.c>

void draw(int n);

int main(void)
{
    int height = get_int("height: ");

    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw(n-1);

    for (int i = 0; i < n; i++)
    {
            printf("#");
    }
    printf("\n");
}
