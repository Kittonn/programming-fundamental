#include <stdio.h>

int main() {
  int arr[3];
  for (int i = 0; i < 3; i++)
  {
    scanf("%d",&arr[i]);
  }
  int m = arr[0];
  for (int i = 1; i < 3; i++)
  {
    if (arr[i] < m)
    {
      m = arr[i];
    }
  }
  printf("%d",m);
  
  return 0;
}