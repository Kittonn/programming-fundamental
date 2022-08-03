#include <stdio.h>

int main()
{
  double s, m, f;
  scanf("%lf %lf %lf", &s, &m, &f);
  double t = s + m + f;
  if (t >= 80 && t <= 100)
  {
    printf("A");
  }
  else if (t >= 75 && t <= 79)
  {
    printf("B+");
  }
  else if (t >= 70 && t <= 74)
  {
    printf("B");
  }
  else if (t >= 65 && t <= 69)
  {
    printf("C+");
  }
  else if (t >= 60 && t <= 64)
  {
    printf("C");
  }
  else if (t >= 55 && t <= 59)
  {
    printf("D+");
  }
  else if (t >= 50 && t <= 54)
  {
    printf("D");
  }
  else
  {
    printf("F");
  }
  return 0;
}