// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b;
  FILE *fr, *fw;
  fr = fopen("./a.txt","r+");
  fw = fopen("./b.txt","w");
  if(fr == NULL) {
    printf("Error!");
    exit(1);
  }
  fscanf(fr,"%d %d",&a,&b);
  
  fprintf(fw,"%d",a+b);
  fclose(fw);
  fclose(fr);
  return 0;
}