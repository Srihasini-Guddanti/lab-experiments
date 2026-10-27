#include <stdio.h>
#include <math.h>
void main()
{
    float principal, rate, time, amount, compound;
    printf("Enter principal amount:\n");
    scanf("%f", &principal);
    printf("Enter rate of interest:\n");
    scanf("%f", &rate);
    printf("Enter time in years:\n");
    scanf("%f", &time);
    amount = principal * pow(1 + rate / 100, time);
    compound = amount - principal;
    printf("Compound Interest = %f\n", compound);
    printf("Total Amount = %f", amount);
}