#include <stdio.h>
int main()
{
    int n, i, j, k;
    float a[10][10], x[10], factor, sum;

    printf("Enter number of variables: ");
    scanf("%d", &n);

    printf("Enter augmented matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j <= n; j++)
            scanf("%f", &a[i][j]);
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            factor = a[j][i] / a[i][i];

            for(k = i; k <= n; k++)
                a[j][k] -= factor * a[i][k];
        }
    }
    for(i = n - 1; i >= 0; i--)
    {
        sum = a[i][n];

        for(j = i + 1; j < n; j++)
            sum -= a[i][j] * x[j];

        x[i] = sum / a[i][i];
    }
    printf("\nSolution:\n");
    for(i = 0; i < n; i++)
        printf("x%d = %.2f\n", i + 1, x[i]);

    return 0;
}
