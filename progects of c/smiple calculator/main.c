#include <stdio.h>
#include <stdlib.h>

int main() {

  char opration;
  double num1 , num2;

  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &opration);
  printf("Enter two nums: ");
  scanf("%lf %lf", &num1, &num2);

  switch (opration) {
    case '+':
      printf("%f + %f = %f", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%f - %f = %f", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%f * %f = %f", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%f / %f = %f", num1, num2, num1 / num2);
      break;
    default:
      printf("Error! please enter correct opration");
  }

  return 0;
}
