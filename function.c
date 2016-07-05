#include <stdio.h>
#include <cs50.h>

// declare the function
void print_greetings(string);

int main(void)
{
    printf("enter your name\n");
    string name = GetString();
    for (int i = 0; i < 10; i++)
    {
        print_greetings(name); //function call
    }
    return 0;
}

//function definition
void print_greetings(string name)
{
    printf("Hello, %s\n", name);
}