// 65010077 - นายกิตติพศ หลำบางช้าง

// Using Bakhshali method
#include <stdio.h>

double countDigits(int n) {
  int c;
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
  double first = countDigits(n), second = 0, a = 0, b = 0;

  second = first * 100;

  while (second != first)
  {
    a = (n - (second * second)) / (2 * second);
    b = second + a;
    first = b - ((a * a) / (2 * b));
    a = (n - (first * first)) / (2 * first);
    b = first + a;
    second = b - ((a * a) / (2 * b));
  }

  printf("%lf", first);

  return 0;
}