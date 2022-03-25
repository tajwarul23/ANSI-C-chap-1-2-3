#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,a,sum=0;
    printf("2+4+6+8+......+ n = \t");
    printf("Enter the Series Count Number ");
    scanf("%d",&a);
    printf("2+4+6+8+......+ n = ");
    for(i=2;i<=a;i=i+2)
    {
        sum=sum+i;

    }
    printf("%d",sum);


    return 0;
}
