#include <cs50.h>
#include <stdio.h>

void draw(int n);


int main (void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    for (int i = 0; i < n; i++)//Loop iterates row by row
    {
        for (int j = 0; j < i + 1; j++)//Loop makes sure that when i = 0,print 1 brick and so forth
        {
            printf("#");
        }
        printf("\n");
    }
}