#include<stdio.h>
int main(){
  float weight,height;
  printf("ENTER YOUR WEIGHT IN KG\n");
  scanf("%f" , &weight);
  printf("ENTER YOUR HEIGHT IN METERS\n");
  scanf("%f" , &height);
  if(weight<=0 || height<=0){
    printf("invalid data , please enter again");
    return 1;
  }
  float BMI= weight/(height*height);
  printf(" YOUR BMI IS : %.2f\n" , BMI);
  return 0;
}
