#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int armstrong(int number);

int main() 
{
    for(int i = 100; i < 999; i++)
    {
        if(armstrong(i))
        {
            printf("Armstong szam: %d\n", i);
        }
    }

    return 0;
}

int armstrong(int number)
{
    int numberDigits[3];
    int index = 0;
    int num = number;
    int formulaNumber = 0;

    while(num > 0)
    {
        numberDigits[index] = num % 10;
        num = num / 10;

        index ++;
    }
    
    formulaNumber = pow(numberDigits[0], 3) + pow(numberDigits[1], 3) + pow(numberDigits[2], 3);

    if(formulaNumber == number)
    {
        return 1;
    }

    return 0;
}