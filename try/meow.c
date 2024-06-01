#include <stdio.h>
#include <cs50.c>

void meow(int n);


int main(void)
{
        int meows = get_int("How many meows do you want? ");
        meow(meows);
}




void meow(int n)
{
    for (int i = 0; i < n; i++)
    printf("meow\n");
}
