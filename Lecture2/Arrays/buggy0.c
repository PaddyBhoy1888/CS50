// #include <stdio.h>

// int main(void)
// {
//     for (int i = 0; i <= 3; i++)
//     {
//         printf("#\n");
//     }
// }

//Aim is to print out 1 colum of 3 #, the code above prints 4. So there is an error/bug.

//A way to check can be to determine the value of i by using a printf statement. 

// #include <stdio.h>

// int main(void)
// {
//     for (int i = 0; i <= 3; i++)
//     {
//         printf("i is %i\n", i);
//         //Used to print out the value of i to check the code.
//         printf("#\n");
//     }
// }

//This will illustrate that the code counts from 0 - 3 which is 4 times. Thus the issue with the code is the less than or equals to "<=" or the value 3. This can be corrected by changing the value of 3 or making the code less than "<" only.

//buggy1.c
#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 2; i++)
    {
        printf("i is %i\n", i);
        //Used to print out the value of i to check the code.
        printf("#\n");
    }
}

//Another tool we can use is a debugger, this is a tool created by computer scienctist to help identify and correct bugs. 

//Select a breakpoint in the code using the red dot in the gutter (i.e. left side of code number lines).

//Run the debug50. $debug50 "file name"

//Running Step Over will play the code and move the highlighted line back to the start of the code. We will see that the variable i =0 will increase to i=1 as it is incremented through the codes for loop. The step through process allows you slow done the operation of the code but this still requiers lthe user toread and understand where the errors are occuring.