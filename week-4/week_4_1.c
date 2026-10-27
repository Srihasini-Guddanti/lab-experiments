#include <stdio.h>
void main()
{
    int A, B, C, D, E, F, G, i, J;
    int a, b, c, d;
    printf("Enter values of A, B, C, D, E, F and G:\n");
    scanf("%d%d%d%d%d%d%d", &A, &B, &C, &D, &E, &F, &G);
    a = A + B * C + (D * E) + F * G;
    b = A / B * C - B + A * D / 3;
    printf("a. A+B*C+(D*E)+F*G = %d\n", a);
    printf("b. A/B*C-B+A*D/3 = %d\n", b);
    printf("Enter values of A and B for expression c:\n");
    scanf("%d%d", &A, &B);
    c = A++ + B-- - A;
    printf("c. A+++B---A = %d\n", c);
    printf("Enter value of i:\n");
    scanf("%d", &i);
    J = (i++) + (++i);
    printf("d. J=(i++)+(++i) = %d\n", J);
}
