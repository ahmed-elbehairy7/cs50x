#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n_sub = get_int("Number of subjects: ");
    int score[n_sub];

    for (int i = 0; i < n_sub; i++)
    {

        score[i] = get_int("score: ");
    }

    printf("Average: %.2f\n", (score[0] + score[1] + score[2]) / 3.0);
}