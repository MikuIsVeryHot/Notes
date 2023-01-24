#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n, row, column, space;
    do
    {
        n = get_int("Height: ");
    }
    while (n <= 0 || n > 8);

    for (row = 0; row < n; row++)
    {
        for (space = 0; space < n - row - 1; space++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("  ");
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}