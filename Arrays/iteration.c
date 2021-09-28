// Draws a pyramid using iteration

#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    //Get the height of the pyramid to be built
    int height = get_int("Height: ");

    //Draw the pyramid
    draw(height);
}

void draw(int h)
{
    //Draw pyramid of height h
    for (int i = 1; i<= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}