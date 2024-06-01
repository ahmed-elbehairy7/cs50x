#include <stdio.h>
#include <cs50.c>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    float Div = (float) x / (float) y;
    printf("%.2f\n", Div);
}
