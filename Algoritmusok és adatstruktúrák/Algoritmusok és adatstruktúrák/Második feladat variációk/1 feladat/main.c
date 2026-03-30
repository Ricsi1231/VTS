#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n = 0;

    int arraySize = 0;

    float min = 0;

    float arrayInput = 0;
    
    int maxValue = 50;
    int minValue = 1;
    
    printf("Adja meg a tomb elmeit:");
    scanf("%d", &n);

    arraySize = n + 1;
    
    float array[arraySize];

    printf("Adjon meg n darab szamot:\n");

    for(int i = 1; i < arraySize; i++)
    {
        R:

        scanf("%f", &arrayInput);
    
        if(arrayInput >= minValue && arrayInput <= maxValue)
        {
            array[i] = arrayInput;
        }
        else
        {
            printf("Error");

            goto R;
        }

        if(i == 1)
        {
            min = arrayInput;
        }
        
        if(array[i] < min)
        {
            min = array[i];
        }
    }

    printf("Kimenet:\n");

    array[0] = min;

    for(int i = 0; i < n + 1; i++)
    {
        printf("%f", array[i]);
        printf("\n");
    }

    return 0;
}