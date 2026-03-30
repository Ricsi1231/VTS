#include <stdio.h>
#include <stdlib.h>

void columnAvrage(int rows, int columns, float array[rows][columns]);

int main() 
{
    int n = 0;
    int m = 0;
    int arrayInput = 0;

    printf("Adja meg a tomb sorainak szamat:");
    scanf("%d", &n);
    printf("\n");

    printf("Adja meg a tomb oszlopainak szamat:");
    scanf("%d", &m);
    printf("\n");

    float array[m][n];

    printf("Adja meg a tomb elemeinek szamat:");
    printf("\n");

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arrayInput);
            array[i][j] = arrayInput;
        }
    }

    printf("Tomb matrix alakban:");

     for(int i = 0; i < m; i++)
     {
        printf("\n");

        for(int j = 0; j < n; j++)
        {
            printf("%f\t", array[i][j]);
        }
     }
     
     columnAvrage(m, n, array);

    return 0;
}

void columnAvrage(int rows, int columns, float array[rows][columns])
{
    int rowIndex = 0;
    int index = 0;
    float result = 0;
    
    while(rowIndex < rows)
    {
        for(int i = 0; i < rows; i++)
        {
            result = result + array[i][rowIndex];
        }
     
      result = result / (float)columns; 
     
      printf("\n");
      printf("Az oszlop atlaga - ");
      printf("%f", result);
     
      rowIndex ++;   
      result = 0;
    }
}