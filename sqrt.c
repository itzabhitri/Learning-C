#include <stdio.h>
#include <math.h>
int main(){
  double A, B, C;
  printf("Enter side A and B\n");
  scanf("%lf %lf", &A, &B);
  C = sqrt((A*A) + (B*B));
  printf("Side C = %.2lf", C);
  return 0;
}
