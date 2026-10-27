#include <stdio.h>
#include <math.h>
void main ()
{
float num;
printf("Enter the number:\n");
scanf("%f",&num);
if(num>=0){
printf("Square root of %f = %f",num,sqrt(num));
}
else{
printf("Square root of the given number is not a real number");
}
}
