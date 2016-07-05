#include <stdio.h>
#include <cs50.h>

// draws mario triangle

int main(void)
{
    int n;
    do
    {
        printf("Hight: ");
        n = GetInt();
    }
    while (n < 0 || n > 23);

    for (int i = 0; i < n; i++)
    {
        //first print spacess
        int l = n - 1 - i;
        for (int j = 0; j < l; j++) printf(" ");
        
        //now print hashes
        for (int k = 0; k < (i + 2); k++) printf("#");
        
        printf("\n");
  
    }
}