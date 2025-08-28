/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() 
{
   int AGE;
   printf(" ENTER YOUR AGE");
   scanf("%d",&AGE);
if(AGE<=0)
   printf("invalid age,please enter valid age");
if(AGE>=18)
printf("ELIGIBLE TO VOTE\n");
else
printf("NOT ELIGIBLE TO VOTE\n");
    return 0;
}