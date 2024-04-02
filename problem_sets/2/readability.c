#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    long long len_text = 0;
    long letters = 0;
    int words = 0;
    int sentences = 0;
    char text[1069999];
    // take input from the user
    printf("Text:");
    scanf("%[^\n]%*c", text);

    len_text = strlen(text);

    // calculate number of letters in the text
    for (int i = 0; i < len_text; i++)
    {
        // check for alphabets
        if (isalpha(text[i]) != 0)
        {
            letters++;
        }
    }

    //calculate number of words in the text
    for (int j = 0; j <= len_text; j++)
    {
        if (text[j] == ' ' || text[j] == '\0' || text[j] == '\t')
        {
            words++;
        }
    }

    //calculate number of sentences in the text
    for (int k = 0; k <= len_text; k++)
    {
        if (text[k] == '.' || text[k] == '!' || text[k] == '?')
        {
            sentences++;
        }
    }
    // calculate Coleman-Liau index
    double let1 = ((float) letters / (float) words) * 100;
    double sen1 = ((float) sentences / (float) words) * 100;
    float index = (0.0588 * let1) - (0.296 * sen1) - 15.8;
    int ind1 = round(index);
    if (ind1 < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (ind1 > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", ind1);
    }




}