#include <stdio.h>

int main() {
  double w,h;
  scanf("%lf %lf",&w,&h);
  int bmi = w / (h*h);
  if (bmi >= 30) {
    printf("Obese");
  } else if (bmi >= 25 && bmi <= 29.9) {
    printf("Overweight");
  } else if (bmi >= 18.5 && bmi <= 24.9) {
    printf("Healthy");
  } else {
    printf("Underweight");
  }
  return 0;
}