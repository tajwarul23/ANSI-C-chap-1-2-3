#include<stdio.h>
int main()
{
    int rem, sum=0,i,a,b ; 
    printf("Enter the Digit : ");
    scanf("%d",&a);
    int temp=a;
    while (temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }

    printf("The sum of those digits are : %d",sum);

    return 0;
}

