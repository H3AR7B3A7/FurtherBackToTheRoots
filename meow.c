#include <cs50.h>
#include <stdio.h>

void meow(int n);
void bark(int n);

int main(void)
{
    meow(3);
    bark(2);
}

void meow(int n)
{
    int i = 0;
    while (i < n)
    {
        printf("Meow...");
        i++;
    }
}

void bark(int n)
{
    for (int j = 0; j < n; j++)
    {
        printf("Bark...");
    }
}