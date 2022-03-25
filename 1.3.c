#include<stdio.h>
int main()
{
    float a,r,y,i,sum=0;
    printf("Enter The Amount : ");
    scanf("%f",&a);
    printf("Enter The Interest : ");
    scanf("%f",&r);
    printf("Enter The Duration in Year : ");
    scanf("%f",&y);
    for(i=1;i<=y;i++)
    {
        a=a+a*(r/100);

    }
    printf("After %.0f Years Total Amount : %.2f",y,a);
    
    return 0;
}
