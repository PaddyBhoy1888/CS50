// #include <stdio.h>

// int main(void)

// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Average: %i\n", (score1 + score2 + score3)/3);
// }

// The example above gives 3 x score values, using printf we can get the average of the 3 scores. Note the value gives a non-decimal pouint answer which is likely not accurate.

// #include <stdio.h>

// int main(void)

// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
//     // By changing the %'%i' to '%f' we can get a floating point ad reveal the decimal. but without specifying a value on the right with a floating point we will get an error. '3.0' is added to stop this.
// }

// #include <stdio.h>

// int main(void)

// {
//     int score1 = 72;
//     int score2 = 73;
//     int score3 = 33;

//     printf("Average: %i\n", (score1 + score2 + score3) / (float)3);
// }
// // Another method would be to convert the 3 to a float using type casting e.g. '/ (float) 3)'

// #include <stdio.h>

// int main(void)

// {
//     int score[3]; // Here we have set the array as integer and made allowance for 3 values to be stored
//     score[0] = 72;
//     score[1] = 73;
//     score[2] = 33;

//     printf("Average: %f\n", (score[0] + score[1] + score[2]) / (float)3);
//     // Using the similiar method for average previously but now having identifying the changed score[] values.
// }

// Rather than having to input the values in the code we can make this more user intuative and ask the user to input the thre values that then can be changed or varied with code editing.

// #include <stdio.h>
// #include <cs50.h>

// int main(void)

// {
//     int score[3];
//     score[0] = get_int("Score: ");
//     score[1] = get_int("Score: ");
//     score[2] = get_int("Score: ");

//     printf("Average: %f\n", (score[0] + score[1] + score[2]) / (float)3);
// }

// Using the cs50.h plug in 'get_int' we can request the user to input the values and making the code more dynamic for varable inputs.

// Again this code code be further developed, as multiple lines are effectively the same we could use a while loop instead of the 3 core values.

// #include <stdio.h>
// #include <cs50.h>

// int main(void)

// {
//     int score[3];

//     for (int i =0; i < 3; i++) //A for loop where 'i' is between 0 & 3. Then increment until all values are defined
//     {
//         score[i] = get_int("Score: "); //prompt the user to define the value of i for the amount of increments specified.
//     }

//     printf("Average: %f\n", (score[0] + score[1] + score[2])/ (float) 3);
// }

// We can propose

#include <stdio.h>
#include <cs50.h>

const int N = 3; // Global variable int defined

float average(int array[]); // Creates a fucntion called average that is a floating value

int main(void)

{
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(scores));
}

float average(int array[]) // The contents of the average function
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += array[i];
    }

    return sum / (float)N;
}
