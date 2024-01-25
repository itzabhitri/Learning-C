#include <stdio.h>
#include <windows.h>
int main()
{
  int h, m, s, day;
  int d = 1000;
  printf("Set time : \n");
  scanf("%d %d %d %d", &h, &m, &s, &day);
  if (h>24 || m>60 || s>60)
  {
    printf("Error ! \n");
    exit(0);
  }
  while (1)
  {
    s++;
    if (s>59)
    {
      m++;
      s=0;
    }
    if (m>59)
    {
      h++;
      m=0;
    }
    if (h>23)
    {
      day++;
      h=0;
    }
    printf("\n Clock :");
    printf("\n %02d:%02d:%02d:%02d", day, h, m, s);
    Sleep(d);
    system("cls");
  }
  return 0;
}