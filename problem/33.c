#include <stdio.h>

int main()
{
  int n[10];
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &n[i]);
  }
  for (int i = 0; i < 9; i++)
  {
    if (n[i - 1] % 2 != 0 && n[i + 1] % 2 != 0) {
      printf("%d ",n[i]);
    } else {
      continue;
    }
  }
  return 0;
}