#include <stdio.h>

int main()
{

// 3. Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab Tax
//  2.5 – 5.0L 5%
//  5.0L - 10.0L 20%
//  Above 10.0L 30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.
  int income;
  float tax = 0.0f;
  printf("Enter income:  \n");
  if (scanf("%d", &income) != 1) {
    printf("Invalid input\n");
    return 1;
  }

  if (income <= 250000) {
    tax = 0.0f;
  } else if (income <= 500000) {
    // 5% on amount above 2.5L
    tax = 0.05f * (income - 250000);
  } else if (income <= 1000000) {
    // 5% on first slab (2.5L) + 20% on amount above 5L
    tax = 0.05f * (500000 - 250000) + 0.20f * (income - 500000);
  } else {
    // 5% on first slab + 20% on second slab + 30% on amount above 10L
    tax = 0.05f * (500000 - 250000) + 0.20f * (1000000 - 500000) + 0.30f * (income - 1000000);
  }

  printf("The total tax you need to pay is %.02f\n", tax);
  return 0;
}