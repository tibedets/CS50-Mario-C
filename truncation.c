#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get numbers from user
    int x = get_int("x: ");
    int y = get_int("y: ");

    float z = (float) x / (float) y;

    printf("%i divided by %i is %f\n", y, x, z);
}