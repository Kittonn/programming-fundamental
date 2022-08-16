#include <stdio.h>

int main()
{
  int s, sum = 0;
  scanf("%d", &s);
  while (s != 0)
  {
    sum += s % 10;
    s /= 10;
    if (s == 0 && sum > 9)
    {
      s = sum;
      sum = 0;
    }
  }
  printf("Sum is %d", sum);
  return 0;
}