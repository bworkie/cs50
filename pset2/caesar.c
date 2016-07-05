#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// caesar cypher
int main(int argc, string argv[])
{
    // Check to see if user give one and only one input
    if (argc != 2 )
    {
        printf("Usage: /home/ubuntu/workspace/pset2/caesar <key>\n");
        return 1;
    }
    
    // check to see if that input is non-negative integer
    int shift_size = atoi(argv[1]);
    if (shift_size < 0)
    {
        printf("Key must be a non-negative integer.\n");
        return 1;
    }
    
    // Get the input string
    string input_string = GetString();
    
    // Now iterate through the input string and shift the alphabet characters by k
    for (int i = 0, n = strlen(input_string); i < n; i++)
    {
        // First check if it is alphabet
        if (isalpha(input_string[i]))
        {
        
            // find the shifted position
            
            // if small letter, need to shift by 'a' and shift back
            if (islower(input_string[i]))
            {
                int new_char_pos = (((shift_size + input_string[i]) - 'a') % 26) + 'a';
                // print the new shifted character
                printf("%c", new_char_pos);
            }
            else
            // if capital letter, need to shift by 'A' and shift back
            {
                int new_char_pos = (((shift_size + input_string[i]) - 'A') % 26) + 'A';
                // print the new shifted character
                printf("%c", new_char_pos);
            }
                
        }
        else
        {
        // if not an alphabet, just print it
        printf("%c", input_string[i]);
        }
    }
    printf("\n");
    return 0;
    
}