// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>
#include <string.h>

int main()
{
  int len, encrypt[100][100], key, isReversed = 0;
  char str[100];
  printf("Enter a message : ");
  scanf("%[^\n]s", &str);
  printf("Enter a key : ");
  scanf("%d", &key);
  len = strlen(str);
  for (int i = 0; i < key; i++)
  {
    for (int j = 0; j < len; j++)
    {
      encrypt[i][j] = 0;
    }
  }
  int k = 0;
  while (k < len)
  {
    if (isReversed)
    {
      for (int i = key - 2; i > 0; i--)
      {
        encrypt[i][k] = str[k];
        k++;
      }
    }
    else
    {
      for (int i = 0; i < key; i++)
      {
        encrypt[i][k] = str[k];
        k++;
      }
    }
    isReversed = isReversed ? 0 : 1;
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