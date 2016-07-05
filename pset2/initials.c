#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

// prints out initialls in capital
int main(void)
{
    // Get user name
    string s = GetString();
    
    int spaces = 1;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
       if (spaces == 1)
       {
           printf("%c", toupper(s[i]));
           spaces = 0;
       }
       
       if (isspace(s[i])) 
       {
           spaces = 1;
       }
  
    }
    printf("\n");
}