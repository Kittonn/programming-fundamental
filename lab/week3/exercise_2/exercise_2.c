#include <stdio.h>

int main()
{
  int num = 10000;
  for (int n = 1; n <= num; n++)
  {
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
      if (n % i == 0 && i != n)
      {
        sum += i;
      }
    }
    if(sum == n) {
      printf("%d\n",n);
    }
  }

  return 0;
}