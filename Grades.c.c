/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
int marks;
char grade; 
printf(" ENTER YOUR MARKS");
scanf("%d",&marks);
if(marks<0||marks>100);{
printf("INVALID MARKS\nPLEASE ENTER VALID MARKS");
return 0;
}
if(marks>=90)
grade='A';
 else if(marks>=80)
grade='B';
else if(marks>=70)
grade='C';
else if(marks>=60)
grade='D';
else 
grade='F';
printf("%c\n",grade);
return 0;
}