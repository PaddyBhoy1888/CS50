#include <cs50.h>
#include <stdio.h>

int main(void)

{
    string name = get_string("What's your name? ");
    //get_string is a function that requires an input.
    //The function has some string text to ask for an input
    // The variable name is defined as a string and is equal to the input of get_string function.

    printf("hello, %s\n", name);
    //Printf will print out a string sentance with the name variable include.
}
