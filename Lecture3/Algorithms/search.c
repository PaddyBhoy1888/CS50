#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)

// {
//     int number[] = {20, 500, 10, 5, 100, 50}; // An array with the size in any order. Define an array

//     int n = get_int("Number: "); // ask user for number
//     for (int i = 0; i <7; i++) //Implement linear search, starting from 0, less than 7 and iterate over entire array
//     {
//         if (number[i] == n) //if the cuurent numer at iteration i equals(==) n, then,
//         { printf("Found\n");
//             return 0; // this tells us the numer was found
//         }
//     }
//     printf("Not Found\n"); // This tells us the number is not found
//     return 1; // The 1 represents an error i.e. not found unlike the respective 0
// }
// Ctrl +K,C allows to comment out all

{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"}; // An array with the size in any order. Define an array

    string s = get_string("String: "); // ask user for number
    for (int i = 0; i < 6; i++)        // Implement linear search, starting from 0, less than 7 and iterate over entire array
    {
        if (strcmp(strings[i], s) == 0) // if the cuurent string at iteration i equals(==) n, then,
        {
            printf("Found\n");
            return 0; // this tells us the numer was found
        }
    }
    printf("Not Found\n"); // This tells us the number is not found
    return 1;              // The 1 represents an error i.e. not found unlike the respective 0
}
// Ctrl +K,U allows to un-comment out all

//Segmentation faul occurs when accessing memory you should be. To correct change the 7 to 6 above*