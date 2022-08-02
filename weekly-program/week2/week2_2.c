#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char text[1000];
  scanf("%[^\n]s",&text);
  int s = strlen(text);
  for (int i = 0; i < s; i++)
  {
    if(isupper(text[i])) {
      printf("%c",tolower(text[i]));
    } else {
      printf("%c",toupper(text[i]));
    }
  }
  
  return 0;
}