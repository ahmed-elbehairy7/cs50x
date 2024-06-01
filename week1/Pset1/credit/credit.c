#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

bool checksum(long num);

int count;

int main(void)
{
    long number = get_long("Number: ");

    if (!checksum(number))
    {
        printf("INVALID\n");
        return 0;
    }

    long n = number;

    int length = floor(log10(labs(number))) + 1;

    while (n >= 100)
    {
        n = number /= 10;
    }

    if ((n == 34 || n == 37) && length == 15)
    {
        printf("AMEX\n");
        return 0;
    }
    if ((n >= 51 && n <= 55) && length == 16)
    {
        printf("MASTERCARD\n");
        return 0;
    }
    if ((n /= 10) == 4 && (length == 13 || length == 16))
    {
        printf("VISA\n");
        return 0;
    }
    printf("INVALID\n");
    return 0;
}

bool checksum(long num)
{
    int total = 0;

    for (int i = 0; num > 0; i++)
    {
        int tmp = num % 10;
        num /= 10;
        if (i % 2 == 0)
        {
            total += tmp;
            continue;
        }
        tmp *= 2;
        if (tmp >= 10)
        {
            int a = tmp % 10;
            tmp /= 10;
            total += (tmp + a);
            continue;
        }
        total += tmp;
    }

    if (total % 10 == 0)
    {
        return true;
    }
    return false;
}
