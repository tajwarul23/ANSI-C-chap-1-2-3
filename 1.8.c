#include<stdio.h>
void main()
{
    float x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter the (x1,y1) = ");
    scanf("%d %d",&x1,&y1);
    printf("Enter the (x2,y2) = ");
    scanf("%d %d",&x2,&y2);
    printf("Enter the (x3,y3) = ");
    scanf("%d %d",&x3,&y3);
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y1)/(x3-x1);
    if(m1==m2)
    printf("Those three points lie on a straight line.");
    else
    printf("Lie not a straight line. ");
}