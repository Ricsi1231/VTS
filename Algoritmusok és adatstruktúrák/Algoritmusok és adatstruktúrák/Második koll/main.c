#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkPrim(long number);

float formula(int number);
void primNumbersInArray();
int nivenNumber(int number);
void numberCounter();
void sort(int arr[]);
void matrix();
void sample();

int main() 
{
    printf("\n ******** 1 ******** \n");
    
    printf("%f\n", formula(200));
    
    printf("******** 1 ********");

    printf("\n ******** 2 ******** \n");
    
    primNumbersInArray();
    
    printf("******** 2 ********");

    printf("\n ******** 3 ******** \n");
    
    int n = 0;

    printf("Number - ");
    scanf("%d", &n);

    if(nivenNumber(n))
    {
        printf("Niven Number\n");
    }
    else
    {
        printf("Not Niven Number\n");
    }

    printf("******** 3 ********\n");


    printf("******** 4 ********\n");

    numberCounter();

    printf("******** 4 ********\n");

    printf("******** 5 ********\n");

    int arr[25];

    int minNumber = 5;
    int maxNumber = 10;

    for (int i = 0; i < 25; i++)
    {
        arr[i] = rand() % (maxNumber + 1 - minNumber) + minNumber;
    }
    
    sort(arr);

    printf("******** 5 ********\n");

    printf("******** 6 ********\n");

    matrix();

    printf("******** 6 ********\n");

    return 0;
}

int checkPrim(long number) 
{
    int check = 1;

    if(number > 1)
    {
        for(long i = 2; i < number; i++)
        {
            if(number % i == 0)
            {
                check = 0;
                break;
            }
        }
    }

    return check;
}

float formula(int number)
{
    float result = 0;
    long number1 = 0;
    long number2 = 0;

    for(int i = 1; i < number; i++)
    {
        number1 = (4 * i) - 1;
        number2 = (4 * i) + 1;

        result += 1.0 / (float)(number1 * number2);
    }

    return result;
}

void primNumbersInArray()
{
    int arr[40];

    srand(time(0));

    for(int i = 0; i < 40; i++)
    {
        arr[i] = rand();

        if(checkPrim(arr[i]) == 1 && arr[i] >= 100 && arr[i] <= 100000)
        {
            printf("%d\n", arr[i]);
        }
    }   
}

int nivenNumber(int number)
{
    int num = number;
    int formulaNumber = 0;
    int sum = 0;

    while(num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }

    if(number % sum == 0)
    {
        return 1;
    }

    return 0;
}

void numberCounter()
{
    int arr[20];
    int values[11] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int counter[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int minNumber = 10;
    int maxNumber = 20;

    srand(time(0));

    for(int i = 0; i < 20; i++)
    {
        arr[i] = rand() % (maxNumber + 1 - minNumber) + minNumber;

        for(int j = 0; j < 11; j++)
        {
            if(values[j] == arr[i])
            {
                counter[j] ++;
            } 
        }       
    }
    
    for (int i = 0; i < 11; i++)
    {
        printf("Szam %d - ", i + 10);
        printf("%d\n", counter[i]);
    }   
}

void sort(int arr[])
{
    int counter = 0;
    int cpyarr[25];

    for(int i = 0; i < 25; i++)
    {
        cpyarr[i] = arr[i];
    }
    
    for(int i = 0; i < 25; i++)
    {
        if(cpyarr[i] % 2 == 0)
        {
            arr[counter] = cpyarr[i];
            counter ++;
        }
    }
    
    for(int i = 0; i < 25; i++)
    {
        if(cpyarr[i] % 2 != 0)
        {
            arr[counter] = cpyarr[i];
            counter ++;
        }
    }

    for(int i = 0; i < 25; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void matrix()
{
    int row = 5;
    int colum = 5;
    int matrix[row][colum];
    int min = 0;

    srand(time(0));

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < colum; j++)
        {
            matrix[i][j] = rand();
        }       
    }

    min = matrix[0][0];

    for(int i = 1; i < row; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(matrix[row - j - 1][i] < min)
            {
                min = matrix[row - j - 1][i];
            }
        }       
    }

    printf("%d\n", min);   
}

void sample()
{
    
}