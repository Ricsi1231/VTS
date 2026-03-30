#include <stdio.h>
#include <stdlib.h>

int checkPrim(long number);

int main() 
{
    unsigned long number = 2;
    unsigned long formulaNumber = 0;
    int index = 0;

    while (index < 10)
    {
        if(checkPrim(number))
        {
            formulaNumber = (number * number) + 2;

            if(checkPrim(formulaNumber))
            {
                printf("%d\n", number);

                index ++;
            }
        }

        number ++;
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