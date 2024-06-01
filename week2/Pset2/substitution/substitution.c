#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool is_valid(string k);
string toupper_s(string k);
string rotate(string text, string key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string key = toupper_s(argv[1]);
    if (!is_valid(key))
    {
        printf("Key must contain 26 unique alphabetical characters\n");
        return 1;
    }
    string plaintext = get_string("Plaintext: ");
    printf("ciphertext: %s\n", rotate(plaintext, key));
}

bool is_valid(string k)
{
    if (strlen(k) != 26)
    {
        return false;
    }
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(k[i]))
        {
            return false;
        }
        for (int j = 0; j < 26; j++)
        {
            if (i != j && k[i] == k[j])
            {
                return false;
            }
        }
    }
    return true;
}
string toupper_s(string k)
{
    for (int i = 0; i < 26; i++)
    {
        k[i] = toupper(k[i]);
    }
    return k;
}
string rotate(string text, string key)
{
    int l = strlen(text);
    for (int i = 0; i < l; i++)
    {
        if (!isalpha(text[i]))
        {
            continue;
        }
        if (islower(text[i]))
        {
            char tmp = toupper(text[i]);
            text[i] = tolower(key[tmp - 'A']);
            continue;
        }
        text[i] = key[text[i] - 'A'];
    }
    return text;
}