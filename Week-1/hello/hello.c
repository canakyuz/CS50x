#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // Prompt user for name
    string name = get_string("What's your name?\n");

    // Say hello to user
    printf("Hello, %s\n", name);
}
