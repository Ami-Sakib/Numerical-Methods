#include <stdio.h>
#include <math.h>

float g(float x)
{
    return cbrt(x + 2);
}

int main()
{
    float x0, x1, e;

    printf("Enter initial guess and tolerance: ");
    scanf("%f%f", &x0, &e);

    do
    {
        x1 = g(x0);

        if (fabs(x1 - x0) < e)
            break;

        x0 = x1;

    } while (1);

    printf("Root = %.4f", x1);

    return 0;
}
