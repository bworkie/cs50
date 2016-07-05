#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Iterate through each input and print out one character per line
int main(int argc, string argv[])
{
    for (int i = 1; i < argc; i++)
    {
        // note here we are declaring j and n, they are separate by coma
        // this way we don't have to figure out strlen each time we loop
        for (int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            printf("%c\n", argv[i][j]);
        }
        printf("\n");
    }
    return 0;
}