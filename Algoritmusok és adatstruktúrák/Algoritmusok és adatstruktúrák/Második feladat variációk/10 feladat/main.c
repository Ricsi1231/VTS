#include <stdio.h>
#include <stdlib.h>

void findMinInDSideDiagonal(int rows, int columns, int array[rows][columns]);

int main() 
{
	int n = 0;
    int arrayInput = 0;
    int maxValue = 50;
    int minValue = 1;

    printf("Adja meg a tomb sorainak es oszlopainak szamat: ");
    scanf("%d", &n);

    int array[n][n];

    printf("Adja meg a tomb elemeinek szamat:");
    printf("\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            R:

            scanf("%d", &arrayInput);

            if(arrayInput >= minValue && arrayInput <= maxValue)
            {
                array[i][j] = arrayInput;
            }
            else
            {
                printf("Error");

                goto R;
            }
        }
    }

    printf("Tomb matrix alakban:");

    for(int i = 0; i < n; i++)
    {
       printf("\n");

       for(int j = 0; j < n; j++)
       {   
           printf("%d\t", array[i][j]);
       }
    }
    
    findMinInDSideDiagonal(n, n, array);
	
    return 0;
}

void findMinInDSideDiagonal(int rows, int columns, int array[rows][columns])
{
    int min = 0;
    
    for(int i = 0; i < rows; i++)
    {
        if(i == 0)
        {
            min = array[i][columns - 1 - i];
        }
        
        if(array[i][columns - 1 - i] < min)
        {
            min = array[i][columns - 1 - i];
        }
    }
    
    printf("\n");
    printf("A mellekatlon a legkisebb elem - ");
    printf("%d", min);
}