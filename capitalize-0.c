#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Capitalize a word
int main(void)
{
    printf("please give me a string\n");
    
    string s = GetString();
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - ('a' - 'A'));
        }
        else 
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}