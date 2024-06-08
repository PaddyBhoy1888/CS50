#include <stdio.h>

//int main(void)
//{
   //printf("????\n");
//}

// This above is a basic method to show the ???? outputs. We can do better with a for loop below.//

// int main(void)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         printf("?");
//     }
//     printf("\n");


//The above is now more concises and loops the '?' and gives a new line after output. The loop starts at 0 and continues to add 1 until it is the same value as 4 i.e. the prefered number of ? we wanted to output.

//We can now look to add 3 vertical object or in the game bricks or hash symbols. We add this code to be as a continuation of the code above so that both are actioned.


//     for (int i = 0; i < 3; i++)
//     {
//         printf("#\n");
//     }

// }

//We can progress to grid like structures instead of just 1No. row or column. We can think of multiple rows and columns

// #include <stdio.h>
// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//        for (int j = 0; j < 3; j++)
//        {
//         printf("#");
//        }
//        printf("\n");
//     }

// }

//Here we use a loop within a loop to get row by row by row. we cange the i to j in the inner loop to avoid confusion and use a printf to get a new line after each loop of 3 '###'.

//In C you can use the 'CONST' before a variable and this will make it constant i.e. meaning that you can not in advertantly write code later that could change the value of the variable. 

// #include <stdio.h>

// int main(void)
// {
//     const int n = 3;
//     for (int i = 0; i < n; i++)
//     {
//        for (int j = 0; j < n; j++)
//        {
//             printf("#");
//        }
//        printf("\n");
//     }

// }

// we can move away from using a constant and get the user to input the size of the grid. 

//There is a do while loop in C that can help to remove duplication of code and minimize errors. This allows us to define a variable and create a loop that removes the need to repeat code. 

// #include <stdio.h>
// #include <cs50.h>

// int main(void)
// {
//     int n; //define an integer of a value n
//     do //get the user to define the value of n
//     {
//         n = get_int("Size: ");
//     }
//     while (n < 1); //If the user does not comply with the value being 1 or greater loop until they do.

//     // Prints grid of bricks
//     for (int i = 0; i < n; i++)
//     {
//        for (int j = 0; j < n; j++)
//        {
//             printf("#");
//        }
//        printf("\n");
//     }

// }

// Comments are handy for begining a code problem if not sure where to start. This is a sort of puesodo code.


//We can create and define our own functions in C instead of using the pre-defined functions in the #include libraries


#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);

int main(void)

{
    //Get size of grid
    int n = get_size();

    //Print grid of blocks
    print_grid(n);
}

//Here we set the get_size function that has a void value input and outputs a int.
int get_size(void)
{
    //Here we start a do while loop to prompt the user to define a size and create a loop to make sure the user inputs a value that is within our defined parameters.
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n; //This return allows the input to be called in the get_size() variable above.
}

//Here we set the function print_grid with the output being a print/void with the input being 'size' which is defined as an integer 'int'
void print_grid(int size)
{
    //Using a for loop within a for loop we can get a row and column type output.
    for (int i = 0; i < size; i++)
    {
        //This loop will start at 0, then add 1 ("#") until the same as the defined value of 'size'
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
