#include <stdio.h>
#include <cs50.h>

// prints out number of bottles of water used, given time of shower in minutes

int main(void)
{
    printf("minutes: ");
    int minutes = GetInt();
    float gallon = 1.5 * minutes;
    float ounce = gallon * 128;
    float bottle = ounce / 16.0;
    printf("bottles: %i\n", (int) bottle);
}