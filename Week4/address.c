#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // pointer declaration - get address
    printf("%p\n", p);
    printf("%i\n", *p); // dereference operator

    char *s = "Hi!";
    printf("%p\n", s); // (H) address of string (=)

    char *q = &s[0];
    printf("%p\n", q); // address of first char in string (=)

    printf("%p\n", &s[1]); // (i) address = one higher
    printf("%p\n", &s[2]); // (!) ... one higher
    printf("%p\n", &s[3]); // (\0) ... one higher

    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%c\n", *(s + 3));

    int numbers[] = {4, 6, 8, 2, 7, 5, 0};
    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));
}