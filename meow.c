#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = 0;
    while (i < 3)
    {
        printf("Meow...");
        i++;
    }

    for (int j = 0; j < 3; j++)
    {
        printf("Bark...");
    }
}