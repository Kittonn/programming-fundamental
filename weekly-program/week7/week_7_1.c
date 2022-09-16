// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>

int main()
{
  int x, y;
  scanf("%d %d", &x, &y);
  x += y;
  y = x - y;
  x -= y;
  printf("swab : %d %d", x, y);
  return 0;
}