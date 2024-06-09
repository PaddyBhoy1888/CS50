// We can start off with a basic calculator for addition. 

//library packages from cs50 library
// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     int x = get_int("x: ");
//     int y = get_int("y: ");

//     printf("%i\n", x + y);
//     // '%i' symbols used here are to mean for integer and \n for ne line
// }

//LONGS

// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     // 'get_long' is a function that prompts the user to input a value of x.
//     // 'int x' specifies that the x value is an integer
//     // 'x' is equal to the value given by the user to the 'get_long' function.
//     long x = get_long("x: ");

//     // As above for the 'y'
//     long y = get_long("y: ");

//     printf("%li\n", x + y);
//     // '%li' symbols used here are to mean for long integer and \n for ne line
//     // The '%li' symbol in the library allows the computer to function with 64 bits.

// }

//Truncation

// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     // 'get_long' is a function that prompts the user to input a value of x.
//     // 'int x' specifies that the x value is an integer
//     // 'x' is equal to the value given by the user to the 'get_long' function.
//     long x = get_long("x: ");

//     // As above for the 'y'
//     long y = get_long("y: ");

//     // The float is created as if a 'int' or 'long' value needs to be stored in a floating point value. This allows the float to retain those decimal points.
//     float z = x / y;

//     printf("%f\n", z);
//     // '%f' symbol used here is to mean for floating point integer and \n for ne line

// }

//Type Casting

// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     // 'get_long' is a function that prompts the user to input a value of x.
//     // 'int x' specifies that the x value is an integer
//     // 'x' is equal to the value given by the user to the 'get_long' function.
//     long x = get_long("x: ");

//     // As above for the 'y'
//     long y = get_long("y: ");

//     // The float is created as if a 'int' or 'long' value needs to be stored in a floating point value. This allows the float to retain those decimal points.
//     // Specificaly specifying that the x & y are floats allow C to know that it is dividing a float by a float.
//     float z = (float) x / (float) y;

//     printf("%f\n", z);
//     // '%f' symbol used here is to mean for floating point integer and \n for ne line

// }

//Floating-Point Imprecision

// #include <cs50.h>
// #include <stdio.h>

// int main(void)

// {
//     // 'get_long' is a function that prompts the user to input a value of x.
//     // 'int x' specifies that the x value is an integer
//     // 'x' is equal to the value given by the user to the 'get_long' function.
//     long x = get_long("x: ");

//     // As above for the 'y'
//     long y = get_long("y: ");

//     // The float is created as if a 'int' or 'long' value needs to be stored in a floating point value. This allows the float to retain those decimal points.
//     // Specificaly specifying that the x & y are floats allow C to know that it is dividing a float by a float.
//     float z = (float) x / (float) y;

//     printf("%f.20\n", z);
//     // '%.20f' symbol used here is to mean for floating point integer with 20 points after the decimal point and \n for new line.

// }