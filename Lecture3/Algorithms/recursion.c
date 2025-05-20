#include <cs50.h>
#include <stdio.h>

void draw(int n);

// int main (void)
// {
//     draw(1);

// }

// void draw(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("#");
//     }
//     printf("\n");
//     draw(n + 1);
// }

//This code creates an infite recursion and the code would not work. We would need to re-write some of the code to make it correct.

int main (void)

{
    int height = get_int("Height ");
    draw(height);
}
 void draw(int n)
{
    if (n <= 0)//This is called a base case which helps stop the code. The number recals until the number is equal to or less than 0 and then returns.
    {
        return;
    }
    draw(n-1); //recursive call of a function

    for (int i =0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
