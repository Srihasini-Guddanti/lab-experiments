#include <stdio.h>
void main()
{
    float p, r, t, si;
    printf("Enter principal amount:\n");
    scanf("%f", &p);
    printf("Enter rate of interest:\n");
    scanf("%f", &r);
    printf("Enter time in years:\n");
    scanf("%f", &t);
    si = p * r * t / 100;
 printf("Simple Interest = %f", si);
}