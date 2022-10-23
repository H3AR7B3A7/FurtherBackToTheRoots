#include <cs50.h>
#include <stdio.h>

int sum(int scores[], int size);

int main(void)
{
    int n = get_int("How many scores? ");
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %d: ", i + 1);
    }
    printf("Average: %d\n", (sum(scores, n)) / n);
}

int sum(int scores[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + scores[i];
    }
    return (sum);
}