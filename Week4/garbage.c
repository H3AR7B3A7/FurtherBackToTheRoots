#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int scores[3]; // Mistake: Variables not initialized
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", scores[i]); // Garbage values might be printed
    }
}