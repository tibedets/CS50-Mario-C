#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_long("x: ");
    int y = get_long("y: ");
    
    if (x == y)
    {
        printf("%i is the same as %i\n", x, y);
    }
    else if (x > y)
    {
        printf("%i is greater than %i\n", x, y);
    }
    else 
    {
        printf("%i is less than %i\n", x, y);
    }
}