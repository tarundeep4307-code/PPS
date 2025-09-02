#include <stdio.h>

int main() {
   float KM,CM,FEET,INCHES,METERS;
   printf("ENTER DISTANCE BETWEEN 2 CITIES");
   scanf("%f",&KM);
   
   METERS=KM*1000.00;
   CM=KM*100000.00;
   FEET=KM*3280.00;
   INCHES=KM*39370.00;
   
   printf("METERS: %.2f\n" , METERS);
   printf("CM: %.2f\n" , CM);
   printf("FEET: %.2f\n", FEET);
   printf("INCHES: %.2f\n",INCHES);
   
   return 0;
}