/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
float temp , CELSIUS;
printf("ENTER TEMPRATURE IN FAHRENHEIT");
scanf("%f" , &temp);
CELSIUS = (temp - 32) * 5.0 / 9.0 ;
printf(" TEMPRATURE IN CELSIUS IS : %.2f\n" , CELSIUS );

return 0;
    
}