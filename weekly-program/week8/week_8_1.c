// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>

void morse_code(char c)
{
  if (c == 65 || c == 97)
  {
    printf(".- ");
  }
  else if (c == 66 || c == 98)
  {
    printf("-... ");
  }
  else if (c == 67 || c == 99)
  {
    printf("-.-. ");
  }
  else if (c == 68 || c == 100)
  {
    printf("-.. ");
  }
  else if (c == 69 || c == 101)
  {
    printf(". ");
  }
  else if (c == 70 || c == 102)
  {
    printf("..-. ");
  }
  else if (c == 71 || c == 103)
  {
    printf("--. ");
  }
  else if (c == 72 || c == 104)
  {
    printf(".... ");
  }
  else if (c == 73 || c == 105)
  {
    printf(".. ");
  }
  else if (c == 74 || c == 106)
  {
    printf(".--- ");
  }
  else if (c == 75 || c == 107)
  {
    printf("-.- ");
  }
  else if (c == 76 || c == 108)
  {
    printf(".-.. ");
  }
  else if (c == 77 || c == 109)
  {
    printf("-- ");
  }
  else if (c == 78 || c == 110)
  {
    printf("-. ");
  }
  else if (c == 79 || c == 111)
  {
    printf("--- ");
  }
  else if (c == 80 || c == 112)
  {
    printf(".--. ");
  }
  else if (c == 81 || c == 113)
  {
    printf("--.- ");
  }
  else if (c == 82 || c == 114)
  {
    printf(".-. ");
  }
  else if (c == 83 || c == 115)
  {
    printf("... ");
  }
  else if (c == 84 || c == 116)
  {
    printf("- ");
  }
  else if (c == 85 || c == 117)
  {
    printf("..- ");
  }
  else if (c == 86 || c == 118)
  {
    printf("...- ");
  }
  else if (c == 87 || c == 119)
  {
    printf(".-- ");
  }
  else if (c == 88 || c == 120)
  {
    printf("-..- ");
  }
  else if (c == 89 || c == 121)
  {
    printf("-.-- ");
  }
  else if (c == 90 || c == 122)
  {
    printf("--.. ");
  } else if (c == ' ')
  {
    printf(" ");
  }
  
}

int main()
{
  char text[1000];
  scanf("%[^\n]s", &text);
  int i = 0;
  while (text[i] != '\0')
  {
    morse_code(text[i]);
    i++;
  }

  return 0;
}