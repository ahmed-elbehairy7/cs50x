#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Dynamicly allocate an array of size 3
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    //Assign three numbers to that array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //time passes

    //Resize old array to be of size 4
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        free (list);
        return 1;
    }

    //Add fourth number to new array
    tmp[3] = 4;

    //Remember new array
    list = tmp;

    //Print new array
    for (int j = 0; j < 4; j++)
    {
        printf("%i\n", list[j]);
    }

    //Free new array
    free(list);
    return 0;
}