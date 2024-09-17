#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n-1; i++) 
    {
        int swapped = 0;
        for (j = 0; j < n-i-1; j++) 
        {
            if (arr[j] > arr[j+1]) 
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d\n", arr[i]);
    }
}

int main() 
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n);

    printArray(arr, n);

    return 0;
}
