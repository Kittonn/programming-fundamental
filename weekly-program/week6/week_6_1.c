// 65010077 - นายกิตติพศ หลำบางช้าง

// Using Babylonian method
#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  double first = 0, second = 0;
  int newN = n;
  while (newN > 0)
  {
    newN /= 10;
    first++;
  }
  second = first * 100;
  while (first != second)
  {
    first = 0.5 * (second + (n / second));
    second = 0.5 * (first + (n / first));
  }
  printf("%lf %lf", first, second);
  return 0;
}