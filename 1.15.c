#include<stdio.h>
int main()
{
    int i,j,a,count=0;
    printf("Prime Numbers between 1 to 200 = ");
    for(i=2;i<=200;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        printf("%d, ",i);
        count=0;
            
    }
    return 0;
}
