#include<stdio.h>
#include<math.h>
int main()
{
    float r,area,pi;
    pi=3.1416;
    printf("Enter The radius value of the Circle : ");
    scanf("%f",&r);
    area=pi*r*r;
    printf("The area of circle is = %.2f",area);
    return 0;
}
