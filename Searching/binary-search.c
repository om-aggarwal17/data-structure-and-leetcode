#include <stdio.h>

int main()
{
    int a[100], n, se;

    printf("Enter the no. of elements in your array: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element which you want to search: ");
    scanf("%d", &se);

    int low = 0;
    int high = n - 1;
    int found = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == se)
        {
            found = mid;
            break;
        }
        else if (se > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found != -1)
    {
        printf("Element is found at index %d", found);
    }
    else
    {
        printf("Element is not found");
    }

    return 0;
}