#include <stdio.h>
int main(){
  float salary, tax = 0;
  printf("Enter your annual salary in digits:\n");
  scanf("%f", &salary);
  if (salary > 250000 && salary <= 500000)
  {
    tax = tax + 0.05*(salary-250000);
  }
  else if (salary > 500000 && salary <= 1000000)
  {
    tax = tax + 0.20*(salary-500000);
  }
  else if (salary > 1000000)
  {
    tax = tax + 0.30*(salary-1000000);
  }
  printf("Your net income tax is Rs. %0.2f\n", tax);
  return 0;
}