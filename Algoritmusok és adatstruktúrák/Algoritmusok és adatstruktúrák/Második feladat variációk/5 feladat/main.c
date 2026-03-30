#include <stdio.h>
#include <stdlib.h>

void rowAvrage(int rows, int columns, float array[rows][columns]);

int main() 
{
	int n = 0;
    int m = 0;
    int arrayInput = 0;

    printf("Adja meg a tomb sorainak szamat:");
    scanf("%d", &m);
    printf("\n");

    printf("Adja meg a tomb oszlopainak szamat:");
    scanf("%d", &n);
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
     
    rowAvrage(m, n, array);

    return 0;
}

void rowAvrage(int rows, int columns, float array[rows][columns])
{
    int columnIndex = 0;
    int index = 0;
    float result = 0;
    
    while(columnIndex < columns)
    {
        for(int i = 0; i < rows; i++)
        {
            result = result + array[columnIndex][i];
        }
     
        result = result / (float)columns; 
        
        printf("\n");
        printf("\n");
        printf("Az sor atlaga - ");
        printf("%f", result);
        
        columnIndex ++;   
        result = 0;
    }
}