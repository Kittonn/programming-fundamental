// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n[2], i = 0, s = 0;
  FILE *fr, *fw;
  fr = fopen("./a.txt", "r+");
  fw = fopen("./b.txt", "w");
  if (fr == NULL)
  {
    printf("Error!");
    exit(1);
  }
  while (fscanf(fr, "%d", &n[i]) != EOF)
  {
    i++;
  }
  for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
  {
    s += n[i];
  }
  fprintf(fw, "%d", s);
  fclose(fw);
  fclose(fr);
  return 0;
}