// #include <cs50.h>
// #include <stdio.h>

// int main(int argc, string argv[])
// //We can change the 'void' part of the program to include command line arguments like the above.
// //int argc = to count the number & string argv = to count the letters?

// {
//     printf("hello, %s\n", argv[1]);
//     //We can use the argv[1] and introduce the name at the command line to get a response
// }

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
// We can change the 'void' part of the program to include command line arguments like the above.
// int argc = to count the number & string argv = to count the letters?

{
    if (argc == 2) // If the argc is equal to 2 inputs print
    {
        printf("hello, %s\n", argv[1]);
    }
    else // If no input print the following below
    {
        printf("hello, World\n");
    }
}