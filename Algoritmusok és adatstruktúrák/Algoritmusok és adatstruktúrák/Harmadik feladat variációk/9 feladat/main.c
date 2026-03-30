#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nivenNumber(int number, int digit);

int main() 
{
    int number = 0;
    int digit = 0;
    int countDigitNumber = 0;

    printf("Adjon meg egy szamot! ");
    scanf("%d", &number);

    countDigitNumber = number;

    while(countDigitNumber > 0)
    {
        countDigitNumber = countDigitNumber / 10;
        digit ++;
    }

    if(nivenNumber(number, digit))
    {
        printf("Az adott szam niven szam!");
    }
    else
    {
        printf("Az adott szam nem niven szam!");
    }

    return 0;
}

int nivenNumber(int number, int digit)
{
    int numberDigits[digit];
    int index = 0;
    int num = number;
    int formulaNumber = 0;
    int sum = 0;

    while(num > 0)
    {
        numberDigits[index] = num % 10;
        num = num / 10;

        index ++;
    }

    for(int i = 0; i < index; i++)
    {
        sum += numberDigits[i];
    }

    if(number % sum == 0)
    {
        return 1;
    }

    return 0;
}