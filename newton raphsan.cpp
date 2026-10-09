#include <stdio.h>
#include <math.h>

float f(float x)
{
    return x*x*x - x - 2;
}

float df(float x)
{
    return 3*x*x - 1;
}

int main()
{
    float x0, x1, e;

    printf("Enter initial guess and tolerance: ");
    scanf("%f%f", &x0, &e);

    do
    {
        x1 = x0 - (f(x0) / df(x0));

        if(fabs(x1 - x0) < e)
            break;

        x0 = x1;

    } while(1);

    printf("Root = %.4f", x1);

    return 0;
}
