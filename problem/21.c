#include <stdio.h>

int main() {
  int r;
  scanf("%d",&r);
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < r; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  return 0;
}