// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>

int main()
{
  int n, hr = 0, min = 0, sec = 0;
  scanf("%d", &n);
  if (n >= 3600)
  {
    hr = n / 3600;
    n %= 3600;
  }

  min = n / 60;
  sec = n % 60;

  printf("%d:%02d:%02d", hr, min, sec);
  return 0;
}