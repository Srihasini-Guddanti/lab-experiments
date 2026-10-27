#include <stdio.h>
#include <math.h>
void main()
{
  float a,b,c,s,k;
  printf("Enter the lengths of three sides of the triangle:\n");
  scanf("%f %f %f",&a,&b,&c); 
  s=(a+b+c)/2;
  k=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("area of the triangle = %f",k);    
}