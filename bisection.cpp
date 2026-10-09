#include <stdio.h>
#include <math.h>
float f(float x)
{
    return x*x*x - x - 2;
}
int main()
{
    float a, b, c, e;

    printf("Enter a, b and tolerance: ");
    scanf("%f%f%f", &a, &b, &e);

    if (f(a) * f(b) >= 0)
    {
        printf("Invalid interval!");
        return 0;
    }

    while (fabs(b - a) > e)
    {
        c = (a + b) / 2;

        if (f(c) == 0)
            break;
        else if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    printf("Root = %.4f", c);

    return 0;
}
