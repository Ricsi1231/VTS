#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkPrim(long number);

int main() 
{
    long primNumbers[5];
    int index = 0;
    
    long number = 2;
    long formulaNumber = 0;

    while (index < 5)
    {
        if(checkPrim(number) == 1)
        {
            formulaNumber = (pow(2, number) - 1);

            if(checkPrim(formulaNumber) == 1)
            {
                primNumbers[index] = formulaNumber;
                index ++;
            }
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

int checkPrim(long number) 
{
    int check = 1;

    if(number > 1)
    {
        for(long i = 2; i < number; i++)
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