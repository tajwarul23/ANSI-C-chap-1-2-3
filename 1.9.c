#include<stdio.h>
int main()
{
    // age of a person
    int d1,d2,m1,m2,y1,y2,d,m,y;
    printf("Enter the Birth Date, Month & Year : ");
    scanf("%d%d%d",&d1,&m1,&y1);
    printf("Enter the Current Date, Month & Year : ");
    scanf("%d%d%d",&d2,&m2,&y2);
    if(d1>0 && d1<32 && d2>0 && d2<32)
    {
    if(d2>=d1)
    {
        d=d2-d1;
    }
    else
    {
        m2--;
        d=d2+30-d1;
    }

    }
    if(m1>0 && m1<32 && m2>0 && m2<32)
    {
    if(m2>=m1)
    {
        m=m2-m1;
    }
    else 
    {
        y2--;
        m=m2+12-m1;
    }

    }
     
     y=y2-y1;
     printf("Your Age is = %d Years, %d Months, %d Days",y,m,d);


    return 0;
}