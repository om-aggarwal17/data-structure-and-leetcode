#include <stdio.h>

int selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int si = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[si])
            {
                si = j;
            }
        }
        int temp = arr[si];
        arr[si] = arr[i];
        arr[i] = temp;
    }
}

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}