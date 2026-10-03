#include <stdio.h>

int bubbleSort(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        int isSwap = 0;

        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                isSwap = 1;
            }
        }

        if(!isSwap)
        {
            return;
        }
    }
}

int printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}