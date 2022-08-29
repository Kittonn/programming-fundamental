// 65010077 - นายกิตติพศ หลำบางช้าง

// Using Babylonian method
#include <stdio.h>

double countDigits(int n) {
  int c = 0;
  while (n != 0)
  {
    n /= 10;
    c++;
  }
  return c;
}

int main()
{
  int n;
  scanf("%d", &n);
  double first = countDigits(n), second = 0;
  
  second = first * 100;
  while (first != second)
  {
    first = 0.5 * (second + (n / second));
    second = 0.5 * (first + (n / first));
  }
  printf("%lf", first);
  return 0;
}