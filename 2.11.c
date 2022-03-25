/*
find the area of a triangle 
*/

#include <stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,area;
    printf("Enter the sides of the triangle=");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("s = %f",s);
    area =sqrt(s*(s-a)*(s-b)*(s-c));
    return 0;

}