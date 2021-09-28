// Draws a pyramid using recursion

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
    //If nothing to draw
    if (h == 0)
    {
        return;
    }

    //Draw pyramid of height h - 1
    draw(h-1);

    //Draw one more row of width h
    for (int i = 0; i < h; i ++)
    {
        printf("#");
    }
    printf("\n");
}