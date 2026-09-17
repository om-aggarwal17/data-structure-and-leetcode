#include <stdio.h>

int main()
{
    int arr[100], n;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter the elements in array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int se , found = 0; 
    printf("Enter the element which you want to search : ");
    scanf("%d",&se);

    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == se)
        {
            printf("Element found at index %d",i);
            found = 1;
            break;
        }
    }

    if(found != 1 )
    {
        printf("Element not found");
    }

    return 0;
}