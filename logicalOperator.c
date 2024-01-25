// #include <stdio.h>
// int main(){
//   float temp;
//   printf("Enter the temp: ");
//   scanf("%f", &temp);
//   if (temp>=15 && temp<=35)
//   {
//     printf("the weather is good!");
//   }
//   else{
//     printf("the weather is bad!");
//   }
//   return 0;
// }


// #include <stdio.h>
// #include <stdbool.h>
// int main(){
//   float temp;
//   bool sunny = true;
//   printf("Enter the temp: ");
//   scanf("%f", &temp);
//   if (temp>=15 && temp<=35 && sunny)
//   {
//     printf("the weather is good!");
//   }
//   else{
//     printf("the weather is bad!");
//   }
//   return 0;
// }


#include <stdio.h>
int main(){
  float temp;
  printf("Enter the temp: ");
  scanf("%f", &temp);
  if (temp<=15 || temp>=35)
  {
    printf("the weather is bad!");
  }
  else{
    printf("the weather is good!");
  }
  return 0;
}