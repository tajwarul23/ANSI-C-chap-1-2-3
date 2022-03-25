#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("1*2+2*3+3*4+....");
    printf("\tEnter the series length : ");
    scanf("%d",&a);
    printf("1*2+2*3+3*4+....+n = ");
    for(i=1;i<=a;i++)
    {
        sum=sum+(i*(i+1));
    }
    printf("%d",sum);
    return 0;
}
