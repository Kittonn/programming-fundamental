// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char text[1000];
  char morse[26][5] = {
      ".-",
      "-...",
      "-.-.",
      "-..",
      ".",
      "..-.",
      "--.",
      "....",
      "..",
      ".---",
      "-.-",
      ".-..",
      "--",
      "-.",
      "---",
      ".--.",
      "--.-",
      ".-.",
      "...",
      "-",
      "..-",
      "...-",
      ".--",
      "-..-",
      "-.--",
      "--.."};
  scanf("%[^\n]s",&text);
  int len = strlen(text);
  for (int i = 0; i < len; i++)
  {
    if(text[i] >= 97 || text[i] <= 122) {
      text[i] = toupper(text[i]);
    }
    if (text[i] == ' ')
    {
      printf(" ");
    } else {
      printf("%s ",morse[text[i] % 65]);
    }
    
  }
  
  return 0;
}