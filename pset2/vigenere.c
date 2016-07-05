#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Vigenere encription
// encripts a given string using a keyword

int main(int argc, string argv[])
{
    // Check to see if user gave one and only one input
    if (argc != 2 )
    {
        printf("Usage: /home/ubuntu/workspace/pset2/caesar <key>\n");
        return 1;
    }
    
    // check to see if the key is alphabetic string and
    // Lets covert the key into a array of integers to shift by [ 0 - 26]
    // a and A are 0, z and Z are 25

    int key[strlen(argv[1])];

    for (int j = 0, m = strlen(argv[1]); j < m; j++)
    {
        if (isalpha(argv[1][j]) != 0)
        {
            // Here change each character in the key to upper and then subtract 'A' to get
            // a number to shift by
            key[j] = toupper(argv[1][j]) - 'A';
        }
        else
        {
            printf("Keyword must only contain letters A-Z and a-z\n");
            return 1;
        }
    }
    
  // Get the input string to encript
 string input_string = GetString();
    
    // Now iterate through the input string and shift the alphabet characters by k[j]
    int key_index = 0;
    int max_key_index = strlen(argv[1]) - 1;
    
    for (int i = 0, n = strlen(input_string); i < n; i++)
    {
        // First check if it is alphabet
        if (isalpha(input_string[i]))
        {
        
            // find the shifted position
            
            // if small letter, need to shift by 'a' and shift back
            if (islower(input_string[i]))
            {
                int new_char_pos = (((key[key_index] + input_string[i]) - 'a') % 26) + 'a';
                // print the new shifted character
                printf("%c", new_char_pos);

                // now increment the key index or if reached max, wrap around
                // to 0
                if (key_index == max_key_index)
                {
                    key_index = 0;
                }
                else
                {
                    key_index++;
                }
            }
            else
            // if capital letter, need to shift by 'A' and shift back
            {
                int new_char_pos = (((key[key_index] + input_string[i]) - 'A') % 26) + 'A';
                // print the new shifted character
                printf("%c", new_char_pos);

                 if (key_index == max_key_index)
                {
                    key_index = 0;
                }
                else
                {
                    key_index++;
                }
            }
                
        }
        else
        {
        // if not an alphabet, just print the character and the key index will
        // not be incremented
        printf("%c", input_string[i]);
        }
    }
    printf("\n");
    return 0;
  
}
