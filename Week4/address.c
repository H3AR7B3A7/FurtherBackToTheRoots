#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // pointer declaration - get address
    printf("%p\n", p);
    printf("%i\n", *p); // dereference operator
}