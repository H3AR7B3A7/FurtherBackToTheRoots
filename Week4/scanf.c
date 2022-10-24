#include <stdio.h>

int main(void)
{
    int x;
    printf("x: ");
    scanf("%i", &x); // Referencing where to put the value
    printf("x: %i\n", x);

    char *s; // Mistake: missing malloc
    // (But how much is needed? cs50s get_string dynamically allocates memory on user input)
    printf("s: ");
    scanf("%s", s);       // s is an address
    printf("s: %s\n", s); // prints (null)

    // To compile without make defenses, use:
    // > clang -o scanf scanf.c
}