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

#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        printf("#");
       }
       printf("\n");
    }

}

//Here we use a loop within a loop to get row by row by row. we cange the i to j in the inner loop to avoid confusion and use a printf to get a new line after each loop of 3 '###'.






