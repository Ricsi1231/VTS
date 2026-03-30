#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define STRING_SIZE (1000)

int main() 
{
    unsigned long number = 1;
    unsigned long squareNumber = 0;
    unsigned long doubleNumber = 0;
    char buffer[STRING_SIZE];

    while (1)
    {
        sprintf(buffer, "%d", number);
        strcat(buffer, buffer);
        sscanf(buffer, "%d", &doubleNumber);

        squareNumber = pow(number, 2);

        if(squareNumber == doubleNumber)
        {
            printf("%d\n", number);
        }

        number ++;
    }
    
    
    return 0;
}