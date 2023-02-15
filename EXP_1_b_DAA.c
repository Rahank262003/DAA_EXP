#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

void selectionSort(int arr[], int len)
{
    int minIndex, temp;
    for (int i = 0; i < len; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{

    FILE *fptr;
    int index = 99;
    int arrNums[100000];
    clock_t t;
    fptr = fopen("Random.txt", "r");
    for (int i = 0; i <= 999; i++)
    {
        for (int j = 0; j <= index; j++)
        {
            fscanf(fptr, "%d", &arrNums[j]);
        }
        t = clock();
        insertionSort(arrNums, index + 1);
        //selectionSort(arrNums, index + 1);
        t = clock() - t;
        double time_taken = ((double)t) / CLOCKS_PER_SEC;
        printf("%d\t%lf\n", (i + 1), time_taken);
        index = index + 100;
        fseek(fptr, 0, SEEK_SET);
    }
    fclose(fptr);

    return 0;
}
