#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkPrim(unsigned long number);

int main() 
{
    unsigned long primNumbers[5];
    int index = 0;
    
    unsigned long number = 0;   
    unsigned long power = 0;
    unsigned long formulaNumber = 0;

    while(index < 5)
    {
        power = pow(2, number);
        formulaNumber = pow(2, power) + 1;

        if(checkPrim(formulaNumber) == 1)
        {
            primNumbers[index] = formulaNumber;
            index ++;
        }

        number ++;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d", primNumbers[i]);
        printf("\n");
    }

    return 0;
}

int checkPrim(unsigned long number) 
{
    int check = 1;

    if(number > 1)
    {
        for(unsigned long i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                check = 0;
                break;
            }
        }
    }

    return check;
}
