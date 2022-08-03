#include <stdio.h>
#include <string.h>
int main() {
  char text[1000];
  scanf("%[^\n]s",&text);
  int s = strlen(text);
  while (s > -1)
  {
    printf("%c",text[s]);
    s--;
  }
  return 0;
}