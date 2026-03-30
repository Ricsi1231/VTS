#include <stdio.h>
#include <stdlib.h>

void findMin(int rows, int columns, int array[rows][columns]);

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
    
    printf("\n");
    
    findMin(m, n, array);

    return 0;
}

void findMin(int rows, int columns, int array[rows][columns]) 
{
    int columnIndex = 0;
    int min = array[0][0];
    int index = 0;
    
    while(columnIndex < columns)
    {   
        for(int i = 0; i < rows; i++)
        {
            if(array[columnIndex][i] < min)
            {
                min = array[columnIndex][i];
                index = i;
            }
        }
        
        printf("\n");
        printf("A sorban a legkisebb elem - ");
        printf("%d", min);
        printf("\n");
        printf("Indexe - ");
        printf("%d, %d", columnIndex + 1, index + 1);
        printf("\n");
        
        index = 0;
        
        columnIndex++;
    }
}