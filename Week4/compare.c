#include <stdio.h>
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
}