#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
    float regular = get_float("Regular price: ");
    int percent_off = get_int("Percent off: ");
    printf("Sale price: %.2f\n", discount(regular, percent_off));
}

float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}