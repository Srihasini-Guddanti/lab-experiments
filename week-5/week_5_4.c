#include <stdio.h>
int main()
{
int a,b;
int op;
printf("enter a and b");
scanf("%d %d",&a,&b);
printf("select the operation u wanted to perform:\n(1.addition \n 2.subtraction \n 3.multiplication \n  4.division)");
scanf(" %d",&op);
switch(op){
case 1:
printf("%d + %d  = %d",a,b,a+b);
break;
case 2:
printf("%d - %d = %d",a,b,a-b);
break;
case 3:
printf("%d *%d = %d",a,b,a*b);
break;
case 4:
if(b!=0){
printf("%d/%d = %.2f",a,b,(float)a/b);
}
else{
printf("division by zero is not possible");
}
break;
default:
printf("invalid option");
}
return 0;
}