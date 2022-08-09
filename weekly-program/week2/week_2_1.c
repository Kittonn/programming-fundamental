// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>

long int factorial(int n)
{
  long int a = 1;

  for (int i = 1; i <= n; i++)
  {
    a *= i;
  }

  return a;
}

int main()
{
  int n;
  printf("Enter positive number : ");
  scanf("%d", &n);
  printf("%d", factorial(n));
  return 0;
}