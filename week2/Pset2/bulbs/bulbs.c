#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string msg = get_string("Message: ");
    int l = strlen(msg);
    int num[l];
    int bits[l][BITS_IN_BYTE];
    for (int i = 0; i < l; i++)
    {
        num[i] = msg[i];
        for (int j = 0; j < BITS_IN_BYTE; j++)
        {
            if (num[i] % 2 == 0)
            {
                bits[i][j] = 0;
            }
            else
            {
                bits[i][j] = 1;
            }
            num[i] = num[i] / 2;
        }
    }

    for (int i = 0; i < l; i++)
    {
        for (int j = 7; j >= 0; j--)
        {
            print_bulb(bits[i][j]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("0");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("1");
    }
}
