#include <stdio.h>
#include <cs50.h>
#include <string.h>

// print out ages of people in room a year from now
int main(void)
{
    int n;
    do
    {
        printf("What is the number of people in the room: ");
        n = GetInt();
    }
    while (n < 1);
    
    int ages[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("age of person #%i is: ", i + 1);
        ages[i] = GetInt();
    }
    
    printf("some time passes\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("a year from now person #%i will be %i years old\n", i + 1, ages[i] + 1);
    }
}