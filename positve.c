/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
int x;
printf(" enter a number ");
scanf("%d",&x );
if(x>0) {
printf(" it ia a positive number ");
}
else if( x < 0 ){
printf (" it is a negative number ");
}
else {
printf (" zero ");
}
    return 0;
}