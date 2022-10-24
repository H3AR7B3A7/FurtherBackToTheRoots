#include <stdio.h>

void swap(int a, int b);
void good_swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);
    printf("x is %i, y is %i\n", x, y);
    good_swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int a, int b) // Mistake: passed by value
{
    int tmp = a;
    a = b;
    b = tmp;
}

void good_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}