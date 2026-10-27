#include <stdio.h>
void main()
{
    float u, a, t,s;
    printf("Enter initial velocity:\n");
    scanf("%f", &u);
    printf("Enter acceleration:\n");
    scanf("%f", &a);
    printf("Enter time:\n");
    scanf("%f", &t);
    s = u * t + 0.5 * a * t * t;
    printf("Distance travelled = %f",s);
}