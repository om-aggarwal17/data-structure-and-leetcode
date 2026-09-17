#include <stdio.h>

int main()
{
    int a[10][10], m, n;

    printf("Enter the no. of rows : ");
    scanf("%d", &m);

    printf("Enter the no. of columns : ");
    scanf("%d", &n);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Original matrix :\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose matrix :-\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}