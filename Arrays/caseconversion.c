#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //choose upper or lower to convert text to
        //comment out your choice
        //printf("%c", toupper(s[i]));
        printf("%c", tolower(s[i]));
    }
    printf("\n");
}