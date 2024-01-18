#include <stdio.h>
int main(){
  int phy, chem, maths;
  float total_percent;
  printf("Enter marks of physics out of 100\n");
  scanf("%d", &phy);
  printf("Enter marks of chemistry out of 100\n");
  scanf("%d", &chem);
  printf("Enter marks of maths out of 100\n");
  scanf("%d", &maths);
  total_percent=(phy+chem+maths)/3;
  printf("Your total_percent is: %.2f\n", total_percent);
  if (phy<33 || chem<33 || maths<33 || (total_percent<40))
  {
    printf("and you are fail.");
  }
  else{
    printf("and you are pass.");
  }
  return 0;
}