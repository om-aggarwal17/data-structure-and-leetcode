#include <stdio.h>

int main()
{
    int arr[100], n, pos;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the elements in array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position which you want to delete : ");
    scanf("%d", &pos);

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}