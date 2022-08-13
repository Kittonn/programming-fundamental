// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  a += b;
  b = a - b;
  a -= b;
  printf("swab : %d %d",a,b);
  return 0;
}