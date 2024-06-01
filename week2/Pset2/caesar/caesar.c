#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string rotate(string text, int k);
bool only_digits(string key);

int main(int argc, string argv[])
{
    if (argc != 2 || argv[1] < 0 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string plaintext = get_string("Plaintext: ");
    string ciphertext = rotate(plaintext, atoi(argv[1]) % 26);
    printf("Ciphertext: %s\n", ciphertext);
}

string rotate(string text, int k)
{
    int l = strlen(text);
    for (int i = 0; i < l; i++)
    {
        if (!isalpha(text[i]))
        {
            continue;
        }
        text[i] += k;
        if (!isalpha(text[i]))
        {
            text[i] -= 26;
        }
    }
    return text;
}

bool only_digits(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isdigit(key[i]))
        {
            return false;
        }
    }
    return true;
}