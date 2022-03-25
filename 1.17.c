#include<stdio.h>
int main()
{
    int a,sum=0,n;
    printf("1*1+2*2+3*3+......+n*n : ");
    printf("\t Enter the series length : ");
    scanf("%d",&n);
    printf("1*1+2*2+3*3+......+n*n : ");
    for(a=1;a<=n;a++)
    {
    sum=sum+a*a;

    }
    printf("%d",sum);
    return 0;
}
