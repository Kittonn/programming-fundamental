// 65010077 - นายกิตติพศ หลำบางช้าง

// Using Bakhshali method
#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  int newN = n;
  double first = 0, second = 0, a = 0, b = 0;
  while (newN > 0)
  {
    newN /= 10;
    first++;
  }
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