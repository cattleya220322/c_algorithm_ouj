/* ex1-6.c < Input_ex1-6.txt */

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    scanf("%f", &celsius);
    fahrenheit = (9.0 / 5.0) * celsius + 32.0;
    printf("%.2f[celsius] = %.2f[fahrenheit]\n", celsius, fahrenheit);

    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    printf("%.2f[fahrenheit] = %.2f[celsius]\n", fahrenheit, celsius);

    return 0;
}
