#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/// @brief 
/// @param argc 
/// @param argv 
/// @return 
int main(int argc, string argv[])
{
    // Check for number of args
    if (argc != 2)
    {
        printf("Please provide one command line arguement \n");
        return 1;
    }
    //Check only letters are used
    string sad = argv[1];
    for (int i = 0; i < strlen(sad); i++)
    {
        if (!isalpha(sad[i]))
        {
            printf("Key must contain only letters. \n");
            return 1;
        }
    }
    if (strlen(sad) != 26)
    {
        printf("Key must contain 26 letters. \n");
        return 1;
    }
    for (int i = 0, n = strlen(sad); i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (toupper(sad[i]) == toupper(sad[j]))
            {
                printf("Letter must not repeat. \n");
                return 1;
            }
        }
    }
    string plaintext = get_string("Please enter a text: ");
    for (int i = 0; i < strlen(sad); i++)
    {
        if (islower(sad[i]))
        {
            sad[i] = sad[i] - 32;
        }
    }
    printf("ciphertext: ");

    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))

        {
            int letter = plaintext[i] - 65;
            printf("%c", sad[letter]);
        }
        else if (islower(plaintext[i]))
        {
            int letter = plaintext[i] - 97;
            printf("%c", sad[letter] + 32);
        }

        else
        {
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");
}
