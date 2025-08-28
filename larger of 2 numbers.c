/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
int a;    
int b;    
printf("enter two numbers" );

scanf("%d",&a );
scanf("%d",&b );
if (a<b)
 printf( " the largest no.is: %d\n " ,b);
 else
 printf(" the larger no. is : %d\n" , a);
    return 0;
}