/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
int year;    
printf("enter a year " );

scanf ("%d" , &year );
 
 if (( year % 400 ==0 ) || ( year %4 == 0 && year % 100 != 0 ))

printf (" it is a leap year ");
else 
printf ( " it is not a leap year stupid ");
    return 0;
}