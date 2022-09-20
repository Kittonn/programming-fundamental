#include <stdio.h>
#include <string.h>

int main()
{
  char n[100];
  FILE *fp;
  fp = fopen("score.txt", "w");
  struct player
  {
    char name[100];
    int level;
    int score;
  };
  struct player p[5], *ptr;
  for (int i = 0; i < 5; i++)
  {
    scanf("%s %d %d", n, &p[i].level, &p[i].score);
    strcpy(p[i].name, n);
  }
  ptr = p;
  for (int i = 0; i < 5; i++)
  {
    fprintf(fp, "%s %d %d\n", ptr->name, ptr->level, ptr->score);
    ptr++;
  }
  fclose(fp);

  return 0;
}