#include <stdio.h>
#include <math.h>
#include <cs50.c>

int main(void)
{
    float amount = get_float("Egyptian pounds: ");
    int piastres = round(amount * 100);
    printf("Piastres: %i", piastres);
}
