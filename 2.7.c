/*
write two function add() and sub () that do addition ans subtraction and print 
10 + 20 =30;
20-10=30
*/

#include<stdio.h>
int add (int a, int b)
{
 return a + b;
}
int sub (int a, int b)
{
 return a - b;
}
int main()
{
    int num1=10;
    int num2=20;
    printf("%d + %d = %d", num1,num2,add(num1,num2));

    int num3=10;
    int num4=20;
    printf("\n%d - %d = %d", num4,num3,sub(num4,num3));
}