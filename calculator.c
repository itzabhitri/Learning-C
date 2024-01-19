#include <stdio.h>
int main(){
  double num1, num2, result;
  char operator;
  printf("Enter 2 no.s for calculation: ");
  scanf("%lf %lf", &num1, &num2);
  while (getchar() != '\n'); // to not take 'enter' in '%c' below OR we can also do one space before '%c' 
  printf("\nEnter an operator(+, -, *, /): ");
  scanf("%c", &operator);
  switch (operator)
  {
  case '+':
    result = num1 + num2;
    printf("\nresult: %.2lf", result);
    break;
  case '-':
    result = num1 - num2;
    printf("\nresult: %.2lf", result);
    break;
  case '*':
    result = num1 * num2;
    printf("\nresult: %.2lf", result);
    break;
  case '/':
    result = num1 / num2;
    printf("\nresult: %.2lf", result);
    break;
  default:
  printf("%c is not valid", operator);
    break;
  }
  return 0;
}