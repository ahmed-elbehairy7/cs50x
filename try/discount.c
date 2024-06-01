#include <stdio.h>
#include <cs50.c>

float discount(float price, int percentage);

int main(void)
{
    float regular = get_float("Regular price: ");
    int percent_off = get_int("Percent OFF: ");
    float sale = discount(regular, percent_off);
    printf("sale price: %.2f\n", sale);
}

float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}
