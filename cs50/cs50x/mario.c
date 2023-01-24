#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n, space, row, column;
    do
    {
        n = get_int("Heights: ");
    }
    while(n <= 0 || n > 8);

    for(row = 0; row < n; row++)
    {
        for(space = 0; space < n - row - 1; space++)
        {
            printf(" ");
        }
        for(column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}