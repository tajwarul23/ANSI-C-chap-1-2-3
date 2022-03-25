/*
write a program that calculates the distance between two points
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,distance;
    printf("Enter the coordinites values of the 1st point =");
    scanf("%f%f",&a,&b);
    printf("Enter the coordinites values of the 2nd point =");
    scanf("%f%f",&c,&d);
    distance =sqrt(pow((a-c),2)+pow((b-d),2));
    printf(" distance =%f",distance);
}