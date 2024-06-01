#include <stdio.h>
#include <cs50.c>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    int n = 2;
    person people[n];

    people[0].name = "Ahmed";
    people[0].number = "01003816322";

    people[1].name = "Mother";
    people[1].number = "01147209471";

    string s = get_string("", "Who's number are you searching for? ");

    for (int i = 0; i < n; i++)
    {
        if (strcmp(people[i].name, s) == 0)
        {
            printf("found, %s\n", people[i].number);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}

