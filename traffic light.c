/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
int number;
printf("TRAFFIC LIGHT ");
printf("\n 1. RED light");
printf("\n 2.  YELLOW light");
printf("\n 3.  GREEN light");
printf(" \nENTER number");
scanf("%d" ,&number);

switch (number){
    case 1:
    printf(" RED LIGHT , PLEASE STOP");
    break;
    case 2:
    printf(" YELLOW LIGHT , PLEASE WAIT FOR A WHILE");
    break;
    case 3:
    printf(" GREEN LIGHT , YOU CAN GO");
    break;
    default:
    printf("invalid choice , please enter a number (1,2,3)");
    break;
}
return 0;
}