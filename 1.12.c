#include<stdio.h>
int main()
{
    int a,b,sum1=0,sum2=0,fact=1,i,j;
    printf("1!+2+3!+4+....+n : \t");
    printf("Enter the series length : ");
    scanf("%d",&a);
    printf("1!+2+3!+4+....+n : ");
    for ( i = 1; i <= a ; i++)
    {
        if(i%2==1)
        {
            for(j=1;j<=i;j++)
            {
            fact=fact*j;
            }
            sum1=sum1+fact;
            fact=1;
        }
        if(i%2==0)
        sum2=sum2+i;
    }
    
    printf("%d",sum1+sum2);
    return 0;
}
