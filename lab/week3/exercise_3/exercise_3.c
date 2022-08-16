#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int r = n * 2 - 1;
  int rev = n - 1;
  int space = r - 2;
  int space1 = 1;
  for (int i = 1; i <= r; i++)
  {
    if (i == n)
    {
      for (int j = 0; j < r; j++)
      {
        printf("* ");
      }
      printf("\n");
    }
    else if (i < n)
    {
      for (int j = 0; j < i; j++)
      {
        printf("* ");
      }
      for (int j = 0; j < space * 2; j++)
      {
        printf(" ");
      }
      space -= 2;
      for (int j = 0; j < i; j++)
      {
        printf("* ");
      }
      printf("\n");
    }
    else
    {
      for (int j = 0; j < rev; j++)
      {
        printf("* ");
      }
      for (int j = 0; j < space1 * 2; j++)
      {
        printf(" ");
      }

      for (int j = 0; j < rev; j++)
      {
        printf("* ");
      }
      printf("\n");
      rev -= 1;
      space1 += 2;
    }
  }
  return 0;
}