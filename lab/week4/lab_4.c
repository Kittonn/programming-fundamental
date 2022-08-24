#include <stdio.h>
#include <string.h>
int main()
{
  char s[100];
  scanf("%s", &s);
  int len = strlen(s), loop = 0;
  // printf("#8 %s %d %d\n",s,len,loop);
  for (int i = 0; i < len; i++)
  {
    if (s[i] >= '0' && s[i] <= '9')
    {
      loop = loop * 10 + (s[i] - '0');
    }
    // printf("#12 %d %d\n",loop,i);
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
    {
      if (loop == 0 && (s[i - 1] - '0') != 0)
      {
        printf("%c", s[i]);
        // printf("#16 %d %d %d %c\n",loop,i,s[i]-'0',s[i]);
      }
      else
      {
        for (int j = 0; j < loop; j++)
        {
          printf("%c", s[i]);
          // printf("#20 %d %d %c\n",loop,i,s[i]);
        }
        loop = 0;
        // printf("#24 %d %d\n",loop,i);
      }
    }
  }
  return 0;
}
