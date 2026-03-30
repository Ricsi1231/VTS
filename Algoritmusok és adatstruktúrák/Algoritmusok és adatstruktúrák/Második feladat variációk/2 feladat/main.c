#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n = 0;
    int k = 0;

    int max = 0;

    float arrayInput = 0;

    int maxValue = 50;
    int minValue = 1;
    
    int index = 0;

    printf("Adja meg a tomb elmeit:");
    scanf("%d", &n);

    printf("\n");
    printf("Adja meg a k szorzot:");
    scanf("%d", &k);

    float array[n];

    printf("Adjon meg n darab szamot:\n");

    for(int i = 0; i < n; i++)
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
        
        if(i == 0)
        {
            max = arrayInput;
        }
        
        if(array[i] > max)
        {
            max = array[i];
            index = i;
        }
    }

    array[index] = max * k;
    printf("%f", array[index]);

    return 0;
}