#include <stdio.h>

long int factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  return n * factorial(n - 1);
}

int main()
{
  int n;
  printf("Enter positive number : ");
  scanf("%d", &n);
  printf("%d", factorial(n));
  return 0;
}