#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user for height
    int x; 
    do
    {
        x = get_int("How high do you want the Mario bricks to be? ");
    }
    while (x <= 1 | x > 23);
    
    for (int i = 0; i < x; i++)
    {
        for (int j = x - i; j > 1; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}