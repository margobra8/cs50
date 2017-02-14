#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int steps; // declare pyramid height count
    
    // get user input, perform validation
    do
    {
        printf("Height: ");
        
		steps = get_int();
		
        if (steps == 0)
        {
            return 0;
        }
        
    }
    while (steps < 1 || steps > 23);
    
    // handling the pyramid steps
    for (int ii = 0; ii < steps; ii++)
    {
        /*
        (4)
        ---#  #
        --##  ##
        -###  ###
        ####  ####
        */
        
        for(int jj = 0; jj < steps-ii-1; jj++) //print the spaces -ii -1 is bc of having 1 less space each iteration 
        {
            printf(" ");
        }
        
        for (int ll = 0; ll < ii+1; ll++) //print the hashes, increment 1 each iteration
		{
			printf("#");
		}
		
		printf("  "); //print separator spaces
		
		for (int ll = 0; ll < ii+1; ll++) //repeat TODO: wrap in some loop
		{
			printf("#");
		}
		
		printf("\n");
        
    }
    return 0; // if no input
}