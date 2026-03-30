#include <stdio.h>
#include <stdlib.h>

void findMax(int rows, int columns, int array[rows][columns]);

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

    int array[m][n];

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
           printf("%d\t", array[i][j]);
       }
    }
     
     findMax(m, n, array);

    return 0;
}

void findMax(int rows, int columns, int array[rows][columns]) 
{
    int rowIndex = 0;
    int max = array[0][0];
    int index = 0;
    
    while(rowIndex < rows)
    {   
        for(int i = 0; i < rows; i++)
        {
            if(array[i][rowIndex] > max)
            {
                max = array[i][rowIndex];
                index = i;
            }
        }
        
        printf("\n");
        printf("Az oszlop a legnagyobb eleme - ");
        printf("%d", max);
        printf("\n");
        printf("Indexe - ");
        printf("%d, %d", rowIndex + 1, index + 1);
        printf("\n");
        
        index = 0;
        
        rowIndex++;
    }
}