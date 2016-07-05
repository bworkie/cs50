#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

// Capitalize a word using ctype library
// Note here toupper knows to convert only the lower case letters
int main(void)
{
    printf("please give me a string\n");
    
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}