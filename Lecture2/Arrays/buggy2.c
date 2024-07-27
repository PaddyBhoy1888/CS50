// #include <stdio.h>
// #include <cs50.h>

// int get_negative_int(void);

// int main(void)
// {
//     int i = get_negative_int();
//     printf("%i\n", i);
// }
// // No issue with the code above

// int get_negative_int(void)
// {
//     int n; 
//     // We specify that n is an integer. The n has to be declared here before the next brackets as the integer variable has to be used within the scope of these brackets. If it were to be declared inside below and not here then n would not be recognised as an int.
//     do
//     // Here we create a 'do - while loop'
//     {
//         n = get_int("Negative Integer:");
//         //We have get_int which comes with the cs50 library, this prompts the user for a negative number which is store in the variable n.
//     }
//     while (n < 0);
//     // The while is specified to determine if the n < 0 & return n.
//     return n;
// }

// The code above has and error, what is the error.?

// Code sticks on repat when negative value is given, stops when positive value is give.

// Placing a break point at in main and using the debugger tool to see what step by step.

//Using the step into feature we can see that the code registers the negative values that the user gives but it still gets caught in the loop. We can therfore determine that the while loop is the issue & that the 'while(n < 0)' is the route cause. The code can be udated to 'while(n >= 0)' and when the user gives a value the code will act as required.


//Correct code below

#include <stdio.h>
#include <cs50.h>

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    printf("%i\n", i);
}

int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Negative Integer: ");
    }
    while (n >= 0);
    return n;
}

