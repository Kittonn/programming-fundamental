// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>

int main()
{
  int n, hr = 0, min = 0, sec = 0;
  scanf("%d", &n);
  hr = n / 3600;
  min = (n % 3600) / 60;
  sec = n % 3600 % 60;
  printf("%d:%02d:%02d", hr, min, sec);
  return 0;
}