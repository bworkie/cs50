#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

// Capitalize a word using ctype library
int main(void)
{
    printf("please give me a string\n");
    
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        else 
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}