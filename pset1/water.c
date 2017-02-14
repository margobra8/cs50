#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int mins; // outside loop because of scope
    do
    {
        printf("Input a positive number of minutes: ");
        mins = get_int();
    }
    while (mins < 0);
    
    int bottles = mins * 12;
    
    printf("Minutes: %i\n", mins);
    printf("Bottles: %i\n", bottles);
    
}