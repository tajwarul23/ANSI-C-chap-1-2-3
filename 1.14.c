#include<stdio.h>
int main()
{
    int a,b,temp,rem,sum=0;
    printf("Enter a number that you want to know armstrong or not : ");
    scanf("%d",&a);
    temp=a;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(sum == a)
    printf("%d is a Armstrong number.",a);
    else
    printf("%d is Not a Armstrong number.",a);


    return 0;
}
