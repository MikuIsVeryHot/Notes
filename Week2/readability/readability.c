#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    //Ask for text
    string text = get_string("Text: ");
    //Count for number of letters
    float l = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if ((text[i] >= 97 && text[i] <= 122) || (text[i] >= 65 && text[i] <= 90))
        {
            l++;
        }
    }//printf("%f letter(s)\n", l);
    //Count for number of words
    float w = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == 32)
        {
            w++;
        }
    }//printf("%f word(s)\n", w);
    //Count for number of sentences
    float s = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == 33 || text[i] == 46 || text[i] == 63)
        {
            s++;
        }
    }//printf("%f sentence(s)\n", s);


    // Calculate average number of letters & sentences per 100 words
    float L = 100 * (l / w);
    float S = 100 * (s / w);
    float index = 0.0588 * L - 0.296 * S - 15.8;
    printf("%f", index);

    if (index < 1)

    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("This is Grade 16+\n");
    }
    else
    {
        int a;
        a = round(index);
        printf("Grade %i\n", a);
    }
}