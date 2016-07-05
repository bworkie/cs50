#include <stdio.h>
#include <cs50.h>
#include <math.h>
// calculates minumum number of changes needed

int main(void)
{
    // Prompt user for input and check for validity
    printf("O hai! ");
    float change;
    do
    {
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    while ( change <= 0 );
    
    // Change dollar amount to pennies
    float pennies = change * 100.0;
    int total_pennies = (int) round(pennies);
    
    // Calculate # of quarters, dimes, nickels and pennies
    int quarters = total_pennies / 25; // by changing to int, it automatically drops the decimal points
    int remainder25 = total_pennies % 25;
    int dimes = remainder25 / 10;
    int remainder10 = remainder25 % 10;
    int nickel = remainder10 / 5;
    int final_pennies = remainder10 % 5;
    
    printf("%d\n", (quarters + dimes + nickel + final_pennies));
}