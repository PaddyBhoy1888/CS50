#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each lettr in the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)

{

    // Prompt the user for two words. Using the 'get_string' function we can request the user to input a word and assign this word to a variable called 'word1' & 'word2'

    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // compute the score of each word. Using abstraction we can define a funstion called 'compute_score' that takes a string called 'word' as an input and then returns 'word's score as an integer.
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

// Implementing 'compute_score'. To compute the score of a word you need to know the point value of each letter in the word. You can associate letters and their point values with and array.
int compute_score(string word)
{
    // Keep track of score
    int score = 0;

    // Compute score for each character
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }

    return score;
}