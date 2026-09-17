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

    int value;
    printf("Enter the element Which you want to add : ");
    scanf("%d", &value);

    printf("Enter the position : ");
    scanf("%d", &pos);

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}