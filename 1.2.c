#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,y,z;
    printf("Enter The value a : ");
    scanf("%f",&a);
    printf("Enter The value b : ");
    scanf("%f",&b);
    printf("Enter The value c : ");
    scanf("%f",&c);
    z=sqrt(b*b-4*a*c);
    x=(-b+z)/2*a;
    y=(-b-z)/2*a;
    printf("The Value opf X1=%.2f , X2=%.2f ",x,y);

    return 0;
}
