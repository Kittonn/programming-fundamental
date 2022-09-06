#include <stdio.h>

int main()
{
  char *p, str[100];
  p = str;
  scanf("%s", str);
  while (*p != '\0')
  {
    if (*p >= 'a' && *p <= 'z')
    {
      printf("%c", *p - 32);
    }
    else if (*p >= 'A' && *p <= 'Z')
    {
      printf("%c", *p + 32);
    }
    p++;
  }
  return 0;
}