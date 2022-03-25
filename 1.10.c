#include<stdio.h>
int main()
{
    int num,count=0,rem;
    printf("Enter a Number : ");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        count++;
        temp=temp/10;
        
    }
    printf("The digit of this number is : %d",count);
    return 0;
}
