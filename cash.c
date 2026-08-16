#include <cs50.h>
#include <math.h>
#include <stdio.h>
int main(void)
{
    int num;
    do
    {
        num = get_int("Change owed: ");
    }
    while (num < 0);

    // Calculate how many quarters 25
    int temp = num;
    int count = 0;
    while (temp >= 25)
    {
        temp -= 25;
        count += 1;
    }

    // Calculate how many dimes 10
    while (temp >= 10)
    {
        temp -= 10;
        count += 1;
    }

    // Calculate how many nickels 5
    while (temp >= 5)
    {
        temp -= 5;
        count += 1;
    }

    // Calculate how many pennies 1
    while (temp >= 1)
    {
        temp -= 1;
        count += 1;
    }

    printf("%d \n", count);
}
