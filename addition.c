#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_long("x: ");
    
    int y = get_long("y: ");
    
    printf("%li + %li = %li\n", x, y, x+y);
}