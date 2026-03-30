#include <stdio.h>
#include <stdlib.h>

void sum(int rows, int columns, int array1[rows][columns], int array2[rows][columns]);

int main() 
{
	int n = 0;
    int m = 0;
    int arrayInput = 0;

    printf("Adja meg a 1 tomb sorainak szamat:");
    scanf("%d", &m);
    printf("\n");

    printf("Adja meg a 1 tomb oszlopainak szamat:");
    scanf("%d", &n);
    printf("\n");

    int array1[m][n];

    printf("Adja meg a tomb elemeinek szamat:");
    printf("\n");

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arrayInput);
            array1[i][j] = arrayInput;
        }
    }

    printf("Tomb matrix alakban:");

     for(int i = 0; i < m; i++)
     {
        printf("\n");

        for(int j = 0; j < n; j++)
        {
            printf("%d\t", array1[i][j]);
        }
     }
     
    printf("\n");
    printf("Adja meg a 2 tomb sorainak szamat:");
    scanf("%d", &m);
    printf("\n");

    printf("Adja meg a 2 tomb oszlopainak szamat:");
    scanf("%d", &n);
    printf("\n");

    int array2[m][n];

    printf("Adja meg a tomb elemeinek szamat:");
    printf("\n");

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arrayInput);
            array2[i][j] = arrayInput;
        }
    }

    printf("Tomb matrix alakban:");

    for(int i = 0; i < m; i++)
    {
       printf("\n");

       for(int j = 0; j < n; j++)
       {
           printf("%d\t", array2[i][j]);
       }
    }
     
    sum(m, n, array1, array2);
	
    return 0;
}

void sum(int rows, int columns, int array1[rows][columns], int array2[rows][columns]) 
{
    int sum[rows][columns];
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    
    printf("\n");
    printf("\n");
    printf("Vegeredmeny:");
    printf("\n");
    
    for(int i = 0; i < rows; i++)
    {
        printf("\n");
        
        for(int j = 0; j < columns; j++)
        {
            printf("%d\t", sum[i][j]);
        }
    }
}