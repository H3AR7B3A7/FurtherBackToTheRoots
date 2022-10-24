#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 72; // Mistake 1: starting at 1
    x[2] = 73;
    x[3] = 33; // Mistake 2: touching unallocated memory

    // Mistake 3: Not using free
}