#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

string rotate(string text, int k);
bool only_digits(string key);

int main(int argc, string argv[])
{

    string plaintext = get_string("Plaintext: ");
    for (int i = 0; i < 26; i++)
    {
        string ciphertext = rotate(plaintext, i);
        printf("Ciphertext: %s\n", ciphertext);
    }
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