/* write a program that shows addition,substraction,divition and multiplication of 2 numbers
*/

#include<stdio.h>
#include<math.h>
int add (int num1,int num2){
    return num1 + num2;
}
int sub (int num3,int num4){
    return num3 - num4;
}
int multi (int num5,int num6){
    return num5 * num6;
}
int div (int num7,int num8){
    return num7 / num8;
}
int main ()
{
    int a,b;
    printf("Enter the value of x =");
    scanf("%d",&a);
    printf("Enter the value of y =");
    scanf("%d",&b);
    printf("%d + %d =%d",a,b,add(a,b));
    printf(" \n%d - %d =%d",a,b,sub(a,b));
    printf(" \n%d X %d =%d",a,b,multi(a,b));
    printf(" \n%d / %d =%d",a,b,div(a,b));
}