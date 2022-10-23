#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int my_score = 2;
    int points = get_int("Howmany points did you lose? ");

    if (points < my_score)
    {
        printf("You lose fewer points than me.\n");
    }
    else if (points > my_score)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("We tied!\n");
    }
}