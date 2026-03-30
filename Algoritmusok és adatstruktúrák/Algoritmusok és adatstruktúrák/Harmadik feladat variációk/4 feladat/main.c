#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkPrim(unsigned long number);

int main() 
{
    unsigned long primNumbers[4];
    unsigned long number = 0;

    unsigned long minValue = 0;
    unsigned long maxValue = 0;

    int check = 0;

    R:

    printf("Add meg az intervalum legkisebb elemet: ");
    scanf("%d", &minValue);

    printf("Add meg az intervalum legnagzobb elemet: ");
    scanf("%d", &maxValue);

    for(int i = minValue; i <= maxValue; i++)
    {
        if(checkPrim(i) == 1 && checkPrim(i + 2) == 1 && checkPrim(i + 6) == 1 && checkPrim(i + 8) == 1)
        {
            primNumbers[0] = i;
            primNumbers[1] = i + 2;
            primNumbers[2] = i + 6;
            primNumbers[3] = i + 8;

            check = 1;

            break;
        }
    }

    if(check == 1)
    {
        for(int i = 0; i < 4; i++)
        {
            printf("%d", primNumbers[i]);
            printf("\n");
        }
    }
    else
    {
        printf("Ezen az intervalumon nincs 4-es iker prim szam! Adj masik intervalumot!");
        printf("\n");

        goto R;
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