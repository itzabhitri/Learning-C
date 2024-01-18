#include <stdio.h>
int main()
{
  int a, b, c, d;
  printf("enter values of a, b, c, d\n");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if (a > b && a > c && a > d)
  {
    printf("a is greatest");
  }
  else if (b > a && b > c && b > d)
  {
    printf("b is greatest");
  }
  else if (c > a && c > b && c > d)
  {
    printf("c is greatest");
  }
  else
  {
    printf("d is greatest");
  }
  return 0;
}


// 1.Using a nested if-else structure: Bing chat
// #include<stdio.h>
// main() 
// { 
//     int a,b,c,d; 
//     clrscr(); 
//     printf("Enter the Four Numbers :"); 
//     scanf("%d %d %d %d",&a,&b,&c,&d); 
//     if(a>b) 
//     { 
//         if(a>c) 
//         { 
//             if(a>d) 
//             {   
//                 printf("%d is big",a); 
//             } 
//             else 
//             { 
//                 printf("%d is big",d); 
//             } 
//         } 
//     } 
//     else if(b>c) 
//         { 
//             if(b>d) 
//                 { 
//                     printf("%d is big",b); 
//                 } 
//             else 
//                 { 
//                     printf("%d is big",d); 
//                 } 
//         } 
//         else if(c>d) 
//             { 
//                printf("%d is big",c); 
//             } 
//         else 
//         { 
//             printf("%d is big",d); 
//         } 
//     getch(); 
// } 
  

// 1. Using a Temporary Variable: Bard
// int greatest = a;
// if (b > greatest) {
//     greatest = b;
// }
// if (c > greatest) {
//     greatest = c;
// }
// if (d > greatest) {
//     greatest = d;
// }
// printf("%d is greatest", greatest);

// 2. Using the Ternary Operator: Bard
// int greatest = (a > b) ? (a > c ? (a > d ? a : d) : c) : (b > c ? (b > d ? b : d) : c);
// printf("%d is greatest", greatest);

// 2. Using Nested Ternary Operators: ChatGPT
// #include <stdio.h>
// int main() {
//     int a, b, c, d;
//     printf("Enter values of a, b, c, d\n");
//     scanf("%d %d %d %d", &a, &b, &c, &d);

//     int max = (a > b) ? ((a > c) ? ((a > d) ? a : d) : c) : ((b > c) ? ((b > d) ? b : d) : c);

//     printf("%c is greatest", max == a ? 'a' : max == b ? 'b' : max == c ? 'c' : 'd');

//     return 0;
// }

// 3. Using Arrays and Loops: Chat GPT
// #include <stdio.h>
// int main() {
//     int values[4];
//     printf("Enter values of a, b, c, d\n");

//     for (int i = 0; i < 4; ++i) {
//         scanf("%d", &values[i]);
//     }

//     int max = values[0];

//     for (int i = 1; i < 4; ++i) {
//         if (values[i] > max) {
//             max = values[i];
//         }
//     }

//     printf("%c is greatest", max == values[0] ? 'a' : max == values[1] ? 'b' : max == values[2] ? 'c' : 'd');

//     return 0;
// }

// 3. Using an array and a loop: Bing Chat AI
// #include <stdio.h>
// main(){
//   int a[4], i, max;
//   printf("enter values of a[0], a[1], a[2], a[3]\n");
//   for (i=0; i<4; i++) {
//     scanf("%d", &a[i]);
//   }
//   max = a[0];
//   for (i=1; i<4; i++) {
//     if (a[i]>max) {
//       max = a[i];
//     }
//   }
//   printf("%d is greatest", max);
// }

// 4. Using the max Function (C99 or later): Bard
// #include <stdio.h>
// #include <stdlib.h>  // For max()

// int greatest = max(max(a, b), max(c, d));
// printf("%d is greatest", greatest);

// 5. Custom Function for Reusability: Bard
// int find_greatest(int a, int b, int c, int d) {
//     // Logic to find the greatest using any of the above methods
//     return greatest;
// }
// int greatest = find_greatest(a, b, c, d);
// printf("%d is greatest", greatest);
