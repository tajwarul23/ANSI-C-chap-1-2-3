#include<stdio.h>
int main()
{
    int n;
    printf("Enter the ASCII Code=");
    scanf("%d",&n);
    if (n>=0 && n<=128)
    {
        printf("ASCI char is %c",n);
    }
    else{
        printf("Please put an integer between 0 and 128");
    }
}