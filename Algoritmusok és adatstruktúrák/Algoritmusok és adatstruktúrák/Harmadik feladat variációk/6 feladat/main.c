#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    unsigned long number = 0;
    unsigned long num = 0;
    unsigned long result = 0;

    while (1)
    {
        num = number;

        while(num > 0)
        {
            result += pow(num % 10, 2);
            num = num / 10;
        }

        if(result == number)
        {
            printf("%d\n", result);
        }

        number ++;
    }
    
    return 0;
}