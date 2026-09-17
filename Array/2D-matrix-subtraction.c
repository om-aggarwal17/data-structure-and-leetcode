#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sub[10][10], m, n;

    printf("Enter the no. of rows : ");
    scanf("%d", &m);

    printf("Enter the no. of columns : ");
    scanf("%d", &n);

    printf("Enter the Elements of first matrix : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the Elements of Second matrix : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Matrix subtraction :-\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}