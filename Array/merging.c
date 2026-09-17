#include <stdio.h>

int main()
{
    int a1[100] , a2[100] , ma[200] , n1 , n2; 

    printf("Enter the number of element in first array : ");
    scanf("%d", &n1);
    for(int i = 0 ; i<n1 ; i++)
    {
        scanf("%d",&a1[i]);
    }

    printf("Enter the number of element in Second array : ");
    scanf("%d", &n2);
    for(int i = 0 ; i<n2 ; i++)
    {
        scanf("%d",&a2[i]);
    }

    for(int i = 0 ; i<n1 ; i++)
    {
        ma[i] = a1[i];
    }

    for(int i = 0 ; i<n2 ; i++)
    {
        ma[n1+i] = a2[i];
    }

    for(int i = 0 ; i< n1+n2 ; i++)
    {
        printf("%d ", ma[i]);
    }

    return 0;
}