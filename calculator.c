/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() {
   char op;
   double num1, num2;
   
   printf("ENTER TWO NUMBERS");
   scanf("%lf %lf" ,&num1 , &num2);
   printf("ENTER A OPERATOR(+,-,/,*):");
   scanf(" %c" , &op);
   
   switch(op){
       case '+':
       printf("answer=%2lf\n" , num1+num2);
       break;
       case '-':
       printf("answer=%2lf\n" , num1-num2);
       break;
       case '/':
       if(num1==0&&num2==0)
       printf("invalid");
       else
       printf("answer=%2lf\n" , num1/num2);
       break;
       case '*':
       if(num1==0&&num2==0)
        printf("invalid");
        else
       printf("answer=%2lf\n" , num1*num2);
       default:
   

       
   }
       return 0;
       
   }