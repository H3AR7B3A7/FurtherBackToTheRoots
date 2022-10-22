#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("Howmany points did you lose? ");

    if (points < 2)
    {
        printf("You lose fewer points than me.\n");
    }
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("We tied!");
    }
}