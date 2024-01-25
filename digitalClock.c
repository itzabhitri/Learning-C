#include <stdio.h>
#include <windows.h>
int main()
{
  int h=0, m=0, s=0, day=0;
  int d = 1000;
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