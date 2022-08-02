#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char text[1000];
  scanf("%[^\n]s", &text);
  int s = strlen(text);
  for (int i = 0; i < s; i++)
  {
    char t = text[i];
    if (t >= 65 && t <= 90)
    {
      printf("%c", t + 32);
    }
    else if (t >= 97 && t <= 122)
    {
      printf("%c", t - 32);
    }
    else
    {
      printf("%c", t);
    }
  }

  return 0;
}