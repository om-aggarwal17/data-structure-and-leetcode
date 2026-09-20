#include <stdio.h>

int main()
{
    int a[100] , n , se , found = 0;

    printf("Enter the no. of element in your array : ");
    scanf("%d",&n);

    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element which you want to search : ");
    scanf("%d",&se);

    for(int i = 0 ; i<n ; i++)
    {
        if (a[i] == se)
        {
           printf("Element is found at index %d", i);
           found = 1;
           break;
        }
    }

    if(found == 0 )
    {
        printf("Element not found");
    }

    return 0;
}