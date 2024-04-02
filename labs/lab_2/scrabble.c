#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char word[100]);

int main(void)
{
    // Get input words from both players
    char word1[100];
    char word2[100];


    printf("Player 1: ");
    scanf("%s",word1);
    printf("Player 2: ");
    scanf("%s",word2);


    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    // TODO: Print the winner
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

int compute_score(char word[100])
{
    // converts each letter to lowercase
    int string_len = strlen(word);
    for (int k = 0; k < string_len; k++)
    {
        word[k] = tolower(word[k]);
    }

    // initialise final score variable
    int f_score = 0;

    // string of alphabets for comparison
    char alphabet[100] = "abcdefghijklmnopqrstuvwxyz";
    int string_len1 = strlen(alphabet);
    // TODO: Compute and return score for string
    for (int i = 0; i < string_len; i++)
    {
        for (int j = 0; j < string_len1; j++)
        {
            if (word[i] == alphabet[j])
            {
                f_score += POINTS[j];
            }

        }
    }
    return f_score;
}
