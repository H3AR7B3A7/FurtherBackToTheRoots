#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    char *s = get_string("i: ");
    char *t = get_string("j: "); // This is stored at a different address

    if (s == t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    if (strcmp(s, t) == 0) // Which is why we use strcmp
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    // Entering the same word twice ...

    printf("%s\n", s);
    printf("%s\n", t); // Same word

    printf("%p\n", s);
    printf("%p\n", t); // Different address
}