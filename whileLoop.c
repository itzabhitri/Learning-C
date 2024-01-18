#include <stdio.h>
int main(){
  int n, a=1;
  printf("Enter no. of even natural no.s you want to print\n");
  scanf("%d", &n);
  do{
    printf("%d\n", a);
    a++;
    }while(a<=n);
  return 0;
}