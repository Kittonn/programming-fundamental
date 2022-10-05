// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>
#include <string.h>

int main()
{
  int n;
  scanf("%d", &n);
  int chess[8][8];
  memset(chess, 0, 256);
  int pos[n][2], count = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &pos[i][0], &pos[i][1]);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      for (int k = 0; k < 8; k++)
      {
        if (pos[i][0] - 1 == j || pos[i][1] - 1 == k)
        {
          chess[j][k] = 1;
        }
      }
    }
  }

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (chess[i][j] == 0)
      {
        count += 1;
      }
    }
  }
  printf("%d", count);
  return 0;
}