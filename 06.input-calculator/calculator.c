#include <stdio.h>

int main()
{
  float result, num1, num2;

  printf("Enter any two numbers :  ");
  scanf("%f %f", &num1, &num2);

  result = num1 + num2;
  printf("%.2f + %.2f = %.2f\t", num1, num2, result);

  result = num1 - num2;
  printf("%.2f - %.2f = %.2f\t", num1, num2, result);

  result = num1 * num2;
  printf("%.2f * %.2f = %.2f\t", num1, num2, result);

  result = num1 / num2;
  printf("%.2f / %.2f = %.2f", num1, num2, result);

  return 0;
}