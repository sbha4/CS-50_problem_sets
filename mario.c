#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    for (int i = 1; i <= n; i++)
    {
        for (int s = 0; s < (n - i); s++)
        {
            printf(" ");
        }
        for (int h = 1; h <= i; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
