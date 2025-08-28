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
int c;
printf("enter three numbers\n" );

scanf("%d",&a );
scanf("%d",&b );
scanf("%d",&c);

if (c<b&&b>a)

 printf( " the largest no.is: %d\n " ,b);
 else if (a>c&&a>b)
 
 printf(" the larger no. is : %d\n" , a);
 else
 printf( " the larger no is : %d\n" , c);
 
 
    return 0;
}