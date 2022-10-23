#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0, size = strlen(s); i < size; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}