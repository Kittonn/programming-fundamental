// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>

int max(int arr[]) {
  int M = arr[0];
  for (int i = 1; i < 5; i++)
  {
    if(M < arr[i]) {
      M = arr[i];
    }
  }
  return M;
}

int main() {
  int n[5];
  for (int i = 0; i < 5; i++)
  {
    scanf("%d",&n[i]);
  }
  
  printf("Max number is %d",max(n));
  return 0;
}