#include<stdio.h>
#include<math.h>
int main()
{
    double sum=0,n,i;
    printf("enter the value of n =");
    scanf("%lf",&n);
    for ( i = 1; i <= n; i++)
    {
           sum =sum +(1/i);

           if (i==1)
           {
               printf("\n%.0lf +",i );
           }
           else if (i==n)
           {
              printf("1/%.0lf",i);
           }
           else{
               printf(" 1/%.0lf +",i);
           }
           
    }
    printf(" = %.2lf\n",sum);
}