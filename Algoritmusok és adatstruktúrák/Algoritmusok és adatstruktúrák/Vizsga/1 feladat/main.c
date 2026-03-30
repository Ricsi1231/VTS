#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <conio.h>  

#define ARRAY_LENGTH (10)

void avrage(int array[]);
void deleteSmallestElement(int array[]);

int main()
{
    // ! 1 Feladat

    int array1[ARRAY_LENGTH];
    int array2[ARRAY_LENGTH];
    
    int minValue = 6;
    int maxValue = 14;

    srand(time(0));

    for(int i = 0; i < ARRAY_LENGTH; i++)
    {
        array1[i] = rand() % (maxValue + 1 - minValue) + minValue;
    }

    // ! 1 Feladat

    // ! 2 Feladat

    avrage(array1);
    printf("\n");

    // ! 2 Feladat

    // ! 4 Feladat

    for(int i = 0; i < ARRAY_LENGTH; i++)
    {
        array2[i] = rand() % (maxValue + 1 - minValue) + minValue;
    }

    deleteSmallestElement(array2);

    // ! 4 Feladat

    return 0;
}

void avrage(int array[])
{
    double avrage = 0;
    int index = 0;
    
    double minDiff = 0;
    double diff = 0;

    for(int i = 0; i < ARRAY_LENGTH; i++)
    {
        avrage += array[i];
    }

    avrage /= ARRAY_LENGTH;
    minDiff = fabs(avrage - array[0]);

    for(int i = 0; i < ARRAY_LENGTH; i++)
    {
        diff = fabs(avrage - array[i]);

        if(diff < minDiff)
        {
            minDiff = diff;
            index = i;
        }
    }
    
    printf("\n");
    printf("Tomb atlaga %f\n", avrage);
    printf("A legkozlebbi elem az atlaghoz (index): %d\n", index);
    printf("A legkozlebbi elem az atlaghoz (ertek): %d\n", array[index]);
}

void deleteSmallestElement(int array[])
{
    int minIndex = 0;
    int minValue = array[0];
    int arraySize = ARRAY_LENGTH;
    int counter = 0;

    for(int i = 0; i < ARRAY_LENGTH; i++)
    {
        if(array[i] < minValue)
        {
            minValue = array[i];
            minIndex = i;
        }
    }

    for(int i = 0; i < ARRAY_LENGTH; i++)
    {
        if(minValue == array[i])
        {
            counter ++;
        }
    }

    for(int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("\n");

    if(counter > 0)
    {
        for(int i = 0; i <= counter; i++)
        {
            for(int i = minIndex; i < ARRAY_LENGTH - 1; i++)
            {
                array[i] = array[i + 1];
            }

            arraySize --;
        }
    }
    else
    {
        for(int i = minIndex; i < ARRAY_LENGTH - 1; i++)
        {
            array[i] = array[i + 1];
        }

        arraySize --;
    }
    

    for(int i = 0; i < arraySize; i++)
    {
        printf("%d\n", array[i]);
    }
}