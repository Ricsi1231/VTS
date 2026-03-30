#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

#define ARRAY_SIZE (20)

void readFile(int array[]);
void printNums(int array[]);
void printNums(int array[]);
void changeNumes(int array[]);
void sortNums(int array[]);
void insertNums(int array[], int number, int place);
void deleteNum(int array[], int number);

int main()
{ 

    int array[ARRAY_SIZE];

    readFile(array);
    printNums(array);

    printf("\n");

    changeNumes(array);
    printNums(array);

    return 0;
}

void readFile(int array[])
{
    FILE *file = fopen("data.txt", "r");
    char str[ARRAY_SIZE];
    int index = 0;

    if(file == NULL)
    {
        printf("ERROR");
    }

    while(fgets(str, ARRAY_SIZE, file) != 0)
    {
        array[index] = atoi(str);
        index ++;
    }

    fclose(file);
}

void printNums(int array[])
{
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        if(i % 4 == 0)
        {
            printf("\n");
        }

        printf("%d", array[i]);
    }
}

void changeNumes(int array[])
{
    int i, j, temp;

    for(i = 0, j = ARRAY_SIZE; i < ARRAY_SIZE, j > 0; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}