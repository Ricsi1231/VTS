#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long factorial(unsigned long number);

int main() 
{
    unsigned long number = 0;
    int numberDigits[3];
    int index = 0;

    long multiplication = 0;
    long sum = 0;

    long factorial_1 = 0;
    long factorial_2 = 0;
    long factorial_3 = 0;

    for(int i = 100; i <= 999; i++)
    {
        number = i;

        while(number > 0)
        {
            numberDigits[index] = number % 10;
            number = number / 10;

            index ++;
        }

        if(numberDigits[0] > 0)
        {
            factorial_1 = factorial(numberDigits[0]);
        }

        if(numberDigits[1] > 0)
        {
            factorial_2 = factorial(numberDigits[1]);
        }

        if(numberDigits[2] > 0)
        {
            factorial_3 = factorial(numberDigits[2]);
        }

        if(numberDigits[0] > 0 && numberDigits[1] > 0 && numberDigits[2] > 0)
        {
            multiplication = factorial_1 * factorial_2 * factorial_3;
        }

        sum = factorial_1 + factorial_2 + factorial_3;

        if(i == sum || i == multiplication)
        {
            printf("%d\n", i);
        }

        index = 0;
        multiplication = 0;
        sum = 0;
    }

    return 0;
}

unsigned long factorial(unsigned long number) 
{
    if(number == 0 || number == 1) 
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}