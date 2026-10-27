#include <stdio.h>
void main()
{
  int units;
  float bill;
  printf("Enter units consumed:\n");
  scanf("%d", &units);
  if (units < 0)
    {
      printf("Invalid units");
    }
    else if (units <= 100)
    {
      bill = units * 1.50;
      printf("Electricity bill = Rs. %.2f", bill);
    }
    else if (units <= 200)
    {
      bill = units * 2.50;
      printf("Electricity bill = Rs. %.2f", bill);
    }
    else if (units <= 500)
    {
      bill = units * 4.00;
      printf("Electricity bill = Rs. %.2f", bill);
    }
    else
    {
      bill = units * 6.00;
      printf("Electricity bill = Rs. %.2f", bill);
    }
}