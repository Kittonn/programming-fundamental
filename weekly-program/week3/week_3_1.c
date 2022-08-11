#include <stdio.h>

int max(int a,int b) {
  return a > b ? a : b;
}

int main() {
  int n[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d",&n[i]);
  }
  printf("Max number is %d",max(max(max(max(n[4],n[3]),n[2]),n[1]),n[0]));
  return 0;
}