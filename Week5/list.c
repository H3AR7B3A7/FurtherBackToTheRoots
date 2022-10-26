#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Dynamically allocate an array of size 3
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    // Assign 3 values
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time passes...

    // Resize old array to be of size 4
    int *tmp = realloc(list, 4 * sizeof(int)); // Realloc will handle the copy and freeing old array
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // // Copy numbers from old array into new array
    // for (int i = 0; i < 3; i++)
    // {
    //     tmp[i] = list[i];
    // }

    // Add fourth number to new array
    tmp[3] = 4;

    // // Free old array
    // free(list);

    // Remember new array
    list = tmp;

    // Print new array
    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }

    // Free new array
    free(list);
    return 0;
}