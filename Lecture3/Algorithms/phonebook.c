#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)

{

    string names[] = {"Carter", "David"}; // List of names as string

    string numbers[] = {"+1-617-495-1000", "+1-949-468-2750"}; // List of numbers as a string

    string name = get_string("Name: "); // Calls the function to get user to insert name value
    for (int i = 0; i < 2; i++)         // For loop starting from 0 to 2 whilst iterating 1 number at a time
    {
        if (strcmp(names[i], name) == 0) // if the return value of 'strcmp' of all of the names in the 'names list' against the names the user input. If all the characters in the string are equal the proceed to printf below
        {
            printf("Found %s\n", numbers[i]); // print if found and print the number
            return 0;                         // returns 0 if code works
        }
    }
    printf("Not Found\n"); // if not found this will print
    return 1;              // will return 1 if code works
}

// Code code be cleaned up by means of : -
//  - In for loop i = 2, if the list gets larger than 2 then manual changes would be required.
//  - The need for two arrays with seperate names & numbers could lead to issues if one or the other is not added.
//  - We are assuming that the order of the names and the numbers are aligned when it could be changed for what ever reason.