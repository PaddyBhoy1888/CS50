// #include <cs50.h>
// #include <stdio.h>

// int main (int argc, string argv[])

// {
//     if (argc !=2) //if argc does not equal 2
//     {
//         printf("Missing command line argument\n");
//     }

//     else //If the user inputs the argument correctly return the input argument
//     {
//         printf("Hello, %s\n", argv[1]);
//     }
// }

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])

{
    if (argc != 2) // if argc does not equal 2
    {
        printf("Missing command line argument\n");
        return 1; // Added so we can use 'echo $?' to determine if error code works
    }

    else // If the user inputs the argument correctly return the input argument
    {
        printf("Hello, %s\n", argv[1]);
        return 0;
    }