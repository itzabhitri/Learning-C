#include <stdio.h>
#include <string.h>
int main(){
  int age;
  char name[25];
  printf("What is your name?\n");
  // scanf("%s", &name);  Does not count white spaces.
  fgets(name, 25, stdin);  // Counts white spaces too.
  name[strlen(name)-1]= '\0'; //to get new line character.
  printf("Hey %s, how old are you?\n", name);
  scanf("%d", &age);
  printf("Hey %s, you are %d years old.", name, age);
}