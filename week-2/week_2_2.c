#include <stdio.h>
void main()
{
    float c, f;
     printf("Enter temperature in Celsius:\n");
    scanf("%f", &c);

    f = c * 9.0 / 5.0 + 32;
    printf("Fahrenheit = %f\n", f);

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f", &f);

    c = (f - 32) * 5.0 / 9.0;
    printf("Celsius = %f", c);
}