#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Enter text:\n");

    int letter_count = 0;
    int sentence_count = 0;
    int word_count = 1; // start at 1 to account the first word (given assumption)
    int n = strlen(text);

    for (int i = 0; i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letter_count++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentence_count++;
        }
        else if (isspace(text[i])) // more inclusive than (text[i] == " ")
        {
            word_count++;
        }
    }

    float L = ((float) letter_count / word_count) *
              100; // we should add (float) bcz letter_cnt and word_count r int.
    float S = ((float) sentence_count / word_count) * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", (int) round(index));
    }
}
