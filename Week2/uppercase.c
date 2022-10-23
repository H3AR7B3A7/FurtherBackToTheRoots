#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void uppercase1(string s);
void uppercase2(string s);
void uppercase3(string s);

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    uppercase1(s);
    uppercase2(s);
    uppercase3(s);
}

void uppercase1(string s)
{
    for (int i = 0, size = strlen(s); i < size; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

void uppercase2(string s)
{
    for (int i = 0, size = strlen(s); i < size; i++)
    {
        if (islower(s[i])) // Returns 0 or something else
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}

void uppercase3(string s)
{
    for (int i = 0, size = strlen(s); i < size; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}