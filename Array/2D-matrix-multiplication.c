#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], m, n, p, q;

    printf("Enter the no. of rows for first array : ");
    scanf("%d", &m);

    printf("Enter the no. of columns for first array : ");
    scanf("%d", &n);

    printf("Enter the no. of rows for second array : ");
    scanf("%d", &p);

    printf("Enter the no. of columns for second array : ");
    scanf("%d", &q);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if (n != p)
    {
        printf("Multiplication is not possible!");
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                c[i][j] = 0;

                for (int k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", c[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}