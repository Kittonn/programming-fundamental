// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  int encrypt[100][100], col = 0, row = 0, key, reversedRow = 1, isReversed = 0;
  scanf("%[^\n]s", &str);
  scanf("%d", &key);
  int len = strlen(str);
  for (int i = 0; i < key; i++)
  {
    for (int j = 0; j < len; j++)
    {
      encrypt[i][j] = 0;
    }
  }

  for (int i = 0; i < len; i++)
  {
    encrypt[row][col] = str[i];
    if (row == 0)
    {
      isReversed = 0;
    }
    if (row == key - 1)
    {
      isReversed = 1;
    }
    reversedRow = isReversed ? -1 : 1;
    row += reversedRow;
    col++;
  }

  for (int i = 0; i < key; i++)
  {
    for (int j = 0; j < len; j++)
    {
      if (encrypt[i][j] != 0 && encrypt[i][j] != ' ')
      {
        printf("%c", encrypt[i][j]);
      }
    }
  }

  return 0;
}