#include <stdio.h>
#include <math.h>
int main()
{
  int a, p = 2;
  printf("Enter number : ");
  scanf("%d", &a);
  printf("Factoring result : ");
  while (p < a)
  {
    if (a % p == 0)
    {
      printf("%d x ", p);
      a /= p;
    }
    else
    {
      p++;
    }
  }
  printf("%d", a);
  return 0;
}