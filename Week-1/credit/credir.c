#include <cs50.h>
#include <stdio.h>

int main ()
{
    float credit = get_float("Credit: ");
    if (credit >= 1 && credit <= 100)
    {
        printf("Valid\n");
    }
    else
    {
        printf("Invalid\n");
    }

    return 0;    
}