// #include <stdio.h>

// int main(void)

// {
//      char c1 = 'H';
//      char c2 = 'I';
//      char c3 = '!';

//      printf("%c%c%c\n", c1, c2, c3);
//      //%c is used for char
//      // This is a way for using 'char' to print a string
// }

// Like 'int' a 'char' can be used to pass in arguments as arrays.

// This allows us to determin that a 'char' is just an 'int' and a 'string' is just a set of 'char' together. We can test this by replacing the %c with %i and returning the integer number for each char letter as seen below.

// #include <stdio.h>

// int main(void)

// {
//     char c1 = 'H';
//     char c2 = 'I';
//     char c3 = '!';

//     printf("%i %i %i\n", c1, c2, c3);
// }

// This will return the interger values for 'H', 'I', '!'

// This is not the ideal method and thus 'string' could be used.

// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     string s = "HI!"; // A variable called 's' that is equal to "HI!"

//     printf("%s\n", s);
// }

// We can play around with the code further and extract indavidual 'char' in a string by calling where the position in the string using the %c to define a char and 0,1,2,3 etc etc

// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     string s = "HI!";

//     printf("%c%c%c\n", s[0], s[1], s[2]);

// }

// We can further expand on the code to verify the 'NUL' logic of an extra byte being used by C to indicate the end of a string.

// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     string s = "HI!";

//     printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);

// }

// This will print the none included '0' or 'NUL' at the end of the string indicating that C knows its the end of the string.

// The 'NUL' is important when we start to distinguish between multiple strings so the computer knows how to store and handle them.

// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     string s = "HI!";
//     string t = "BYE!";

//     printf("%s\n", s);
//     printf("%s\n", t);

// }

// We can poke around further by puting the strings into and array. So with a string being an array of 'char' then making a array of string's we create an array within an array.

// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     string words[2]; // Creates an array called words with 2 values i.e. 0 & 1

//     words[0] = "HI!"; //Sets the first string variable 0 = "HI!"
//     words[1] = "BYE!"; //Sets the second string variable 1 = "BYE!"

//     printf("%s\n", words[0]); //Prints the first string variable
//     printf("%s\n", words[1]); //Prints the second string variable

// }

// We can further check the 'char' of the string within the array.

// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     string words[2]; // Creates an array called words with 2 values i.e. 0 & 1

//     words[0] = "HI!"; //Sets the first string variable 0 = "HI!"
//     words[1] = "BYE!"; //Sets the second string variable 1 = "BYE!"

//     printf("%c %c %c\n", words[0][0], words[0][1], words[0][2]); //Prints the first string variable
//     printf("%c %c %c %c\n", words[1][0], words[1][1], words[1][2], words[1][3]); //Prints the second string variable

// }

// We can then further verify the 'NUL' or '0' at the end of each string within the arrays by using the '%i' and adding the last variable position to be called.

#include <cs50.h>
#include <stdio.h>

int main(void)

{
    string words[2]; // Creates an array called words with 2 values i.e. 0 & 1

    words[0] = "HI!";  // Sets the first string variable 0 = "HI!"
    words[1] = "BYE!"; // Sets the second string variable 1 = "BYE!"

    printf("%i %i %i %i\n", words[0][0], words[0][1], words[0][2], words[0][3]);                 // Prints the first string variable
    printf("%i %i %i %i %i\n", words[1][0], words[1][1], words[1][2], words[1][3], words[1][4]); // Prints the second string variable
}
