#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
//array storing the scores for each letter from A-Z
int letter_scores[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                         1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{//prompting user to enter the words
    string word1 = get_string("Player 1:");
    string word2 = get_string("Player 2:");

    //calculating score for player 1
    int sum1 = 0;
    int n1 = strlen(word1); // variale declared outside of the loop because more efficient.
    for (int i = 0; i < n1; i++)
    {
        if (isalpha(word1[i])) // ensure only alphabatic chracters are considered
        {
            sum1 += letter_scores[toupper(word1[i]) - 'A']; // to get the index of the respective letter. then Summation is done by array [i]
        }
    }
    //calculating score for player 2
    int sum2 = 0;
    int n2 = strlen(word2);
    for (int i = 0; i < n2; i++)
    {
        if (isalpha(word2[i]))
        {
            sum2 += letter_scores[toupper(word2[i]) - 'A'];
        }
    }
    //determining the winner
    if (sum1 > sum2)
    {
        printf("Player 1 wins\n");
    }
    else if (sum2 > sum1)
    {
        printf("Player 2 wins\n");
    }
    else
    {
        printf("Tie\n");
    }
}
