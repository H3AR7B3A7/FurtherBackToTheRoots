#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // pointer declaration - get address
    printf("%p\n", p);
    printf("%i\n", *p); // dereference operator

    char *s = "Hi!";
    printf("%p\n", s); // address of string (=)

    char *q = &s[0];
    printf("%p\n", q); // address of first char in string (=)

    printf("%p\n", &s[1]); // (i) address = one higher
    printf("%p\n", &s[2]); // (!) ... one higher
    printf("%p\n", &s[3]); // (\0) ... one higher
}