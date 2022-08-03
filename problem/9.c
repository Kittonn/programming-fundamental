#include <stdio.h>

int main() {
  int n,c=0;
  for (int i = 0; i < 4; i++)
  {
    scanf("%d",&n);
    if (n % 2==0)  {
      c++;
    }
  }
  printf("%d",c);
  
  return 0;
}