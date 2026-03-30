#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int matrix[5][5];
    int Sortmatrix[5][5];

    char str[25];
    int data[25];
    int index = 0;

    int temp = 0;

    FILE *file;
    file = fopen("data1.txt", "r");

    if(file == NULL)
    {
        return 0;
    }

    while (fgets(str, 25, file) != NULL)
    {
        data[index] = atoi(str);

        index++;
    }
    
    fclose(file);

    index = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            matrix[i][j] = data[index];
            data[index] = matrix[i][j];
            
            //printf("%d\n", data[i]);

            index ++;
        }

        //printf("\n");
    }

    for(int i = 0; i < 25 - 1; ++i)
    {
        for(int j = 0; j < 25 - i - 1; ++j)
        {
            if(data[j] < data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 25; i++)
    {
        printf("%d\n", data[i]);
    }

    
    
    return 0;
}