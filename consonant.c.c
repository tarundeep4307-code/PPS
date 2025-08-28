/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main(){
char a;
printf("enter a letter");
scanf("%c",&a);
if( a=='a'|| a=='e'|| a=='i'|| a=='o'|| a=='u')
printf("vowel");
else
printf("consonant");
    return 0;
}