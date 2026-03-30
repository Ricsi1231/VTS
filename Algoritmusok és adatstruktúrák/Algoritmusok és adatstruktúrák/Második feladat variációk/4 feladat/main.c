#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int n = 0;
    int m = 0;
    int k = 0;

    int arrayInput = 0;

    int maxValue = 50;
    int minValue = 1;

    printf("Adja meg a tomb sorainak szamat:");
    scanf("%d", &m);
    printf("\n");

    printf("Adja meg a tomb oszlopainak szamat:");
    scanf("%d", &n);
    printf("\n");

    printf("\n");
    printf("Adjon meg egy k szamot:");
    scanf("%d", &k);
    printf("\n");

    int array[m][n];

    printf("Adja meg a tomb elemeinek szamat:");
    printf("\n");

    for(int i = 0; i < m; i++)
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
       for(int j = 0; j < m; j++)
       {
           printf("%d\t", array[i][j]);
       }
    }

    printf("\n");
    printf("Paratlan elemek amelyek nagyobbak -tol:");
    printf("\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(array[i][j] % 2 != 0 && array[i][j] > k)
            {
                printf("%d", array[i][j]);
                printf("\n");
            }
        }
    }

    return 0;
}