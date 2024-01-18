#include <stdio.h>
int main(){
  int age;
  printf("Enter any age from 1 to 5:\n");
  scanf("%d", &age);
  switch (age)
  {
  case 1:
    printf("Your age is 1");
    break;
  case 2:
    printf("Your age is 2");
    break;
  case 3:
    printf("Your age is 3");
    break;
  case 4:
    printf("Your age is 4");
    break;
  case 5:
    printf("Your age is 5");
    break;
  default:
    printf("Inavlid input.");
  }
  return 0;
}