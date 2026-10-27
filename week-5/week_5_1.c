#include <stdio.h>
void main()
{
    int a, b, c, d, max, min;
    printf("Enter four numbers:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b)
        max = a;
    else
        max = b;
    if (c > max)
        max = c;
    if (d > max)
        max = d;
    if (a < b)
        min = a;
    else
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
}