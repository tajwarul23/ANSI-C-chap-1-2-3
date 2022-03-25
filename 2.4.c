/*
write a program that shows x = a/(b-c)
a)where a = 250,b=85,c=25
b)where a =300,b=70,c=70
*/
//ans of (a)
#include<stdio.h>

void main ()
{

    int a,b,c;
    float x;
    a=250;
    b=85;
    c=25;
    x=a/(b-c);
    printf("x = %f\n",x);
    
    a=300;
    b=70;
    c=70;
    x=a/(b-c);
    printf("x = %f\n",x);
}