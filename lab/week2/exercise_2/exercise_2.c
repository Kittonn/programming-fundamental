#include <stdio.h>

int main()
{
  int a, b, s;
  printf("Enter first number : ");
  scanf("%d", &a);
  printf("Enter second number : ");
  scanf("%d", &b);

  while (a % b != 0)
  {
    s = a % b;
    a = b;
    b = s;
  }
  printf("Greatest common divisor = %d", b);
  return 0;
}