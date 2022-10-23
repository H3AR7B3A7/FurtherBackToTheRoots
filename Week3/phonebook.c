#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string names[] = {"Steven", "David"};
    string numbers[] = {"+32-479-318-743", "+1-949-468-2750"};

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(names[i], "Steven") == 0)
        {
            printf("Found: %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}