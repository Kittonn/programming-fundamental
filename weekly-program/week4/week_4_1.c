// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>
#include <string.h>

int main()
{
  char s[100];
  scanf("%[^\n]s", &s);
  int len = strlen(s);
  for (int i = 0; i < len; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      printf("%c", s[i] - 32);
    }
    else if (s[i] >= 'A' && s[i] <= 'Z')
    {
      printf("%c", s[i] + 32);
    }
    else
    {
      printf("%c", s[i]);
    }
  }

  return 0;
}