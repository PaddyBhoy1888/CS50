// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     string name = get_string("What is your name? ");
//     //Calls a fuction 'get_string' which requests and input from the user, i.e. "what is your name?". This Sets the variable 'name' as a string which is equal the user input from the called function.

//     int n = 0; ///initialising the variable 'n' to = 0 i.e. start from the start.
//     while (name[n] != '\0') //A while loop that checks the variable 'name' at the [n] point to make sure it is not equal to '\0' which would indicate the end of a string.
//     {
//         n++; //This part of the code will count and increament through the code until the end of the string has been located, once located the loop will end.
//     }
//     printf("%i\n", n);//Here we will print the final number of incrementation and determine the overall length of the string.
// }

// We can do this because strings have the important variable '\0' at the end of the string unlike other data types.

// With this issue being common others have created function of strings and thus a whole library can be found in the programming lanugaue 'C'. This can be foun in a header file called 'string.h'

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)

{
    string name = get_string("What is your name? ");
    // Calls a fuction 'get_string' which requests and input from the user, i.e. "what is your name?". This Sets the variable 'name' as a string which is equal the user input from the called function.

    int n = strlen(name); // We are using the built in 'strlen' function to read the legth of the variable 'name' and set 'n' to equal this value.

    printf("%i\n", n); // Printing the variable 'n' as an integer.
}
