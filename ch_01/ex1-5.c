/*
- gcc -lm *.c
- libm.so
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z;
    x = 2.0;
    y = 5.0;
    z = 0.0;

    z = pow(x, y);
    printf("pow(%1$.1f, %2$.1f) = %3$.1f\n", x, y, z);

    double a, b;
    a = 3.14;
    b = -a;
    // double ceil(double x);
    printf("ceil(%1$.3f) = %2$.1f\n", a, ceil(a));
    printf("ceil(%1$.3f) = %2$.1f\n", b, ceil(b));

    printf("floor(%1$.3f) = %2$.1f\n", a, floor(a));
    printf("floor(%1$.3f) = %2$.1f\n", b, floor(b));

    return 0;
}
