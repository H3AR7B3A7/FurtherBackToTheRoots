#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Input s: ");

    string t = s; // Both char *s & char *t point to the same address

    t[0] = toupper(t[0]); // Change source

    printf("s: %s\n", s);
    printf("t: %s\n", t); // Changes too

    s = get_string("Input s: ");

    char *u = malloc(strlen(s) + 1); // Dynamically allocate memory
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        u[i] = s[i];
    }

    char *v = malloc(strlen(s) + 1);
    strcpy(v, s); // Shorthand

    s[0] = toupper(s[0]); // Change source

    printf("s: %s\n", s);
    printf("u: %s\n", u); // Unchanged
    printf("v: %s\n", v); // Unchanged
}