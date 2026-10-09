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

    if(f(a) * f(b) >= 0)
    {
        printf("Invalid interval!");
        return 0;
    }

    do
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if(fabs(f(c)) < e)
            break;

        if(f(a) * f(c) < 0)
            b = c;
        else
            a = c;

    } while(1);

    printf("Root = %.4f", c);

    return 0;
}
