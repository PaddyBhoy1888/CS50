// We can solve other data type problems with the 'ctype.h' function library, e.g. checking if something is upper case or lower case and converting it to upper case only.

// #include <cs50.h>
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(void)

// {
//     string s = get_string("Before: "); //Calling the function 'get-string' prompting the user for an input.

//     printf("After: "); //
//     for (int i = 0; i < strlen(s); i++) //Here we are incrementing over every character in the string from left to right of upto but not through the value of 's'
//     {
//         if(s[i] >= 'a' && s[i] <= 'z') //Checks if something is lowercase. It does this by checking that the 'char' at s[i] is greater than or equal to 'a' and the 'char' at s[i] is less than or equal to 'z'. This logicall tell us that if the value falls within these lowercase limits then the 'char' must be a lowercase letter.

//         {
//             printf("%c", s[i] - 32); //This prints out the 'char' value of i, but by minusing 32 it will convert to uppercase variable of 'i'. This is done because there is a 32 integer difference between the uppercase & lowercase letters on the asky charts used by C.
//         }
//         else //We include an else statement her incase there is an uppercase  'char' located in the string and as below will print this 'char' unchanged.
//         {
//             printf("%c", s[i]);//Prints any uppercase 'char' unchanged.
//         }

//     }

//     printf("\n"); //Added for asthetics purposes to move the '$' on the terminal output.

// }

// We can use libraries to remove the tediousness from long winded code by referncing libraries with function created that do the tasks for us.

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)

{
    string s = get_string("Before: "); // Calling the function 'get-string' prompting the user for an input.

    printf("After: ");                  //
    for (int i = 0; i < strlen(s); i++) // Here we are incrementing over every character in the string from left to right of upto but not through the value of 's'
    {

        printf("%c", toupper(s[i])); // The 'toupper' fuction takes in the variable and does the math for you. The fuction is smart enough to know the difference between upper & lowercase and can allow us to reduce the overall code i.e. the if, else statements.
    }

    printf("\n"); // Added for asthetics purposes to move the '$' on the terminal output.
}
