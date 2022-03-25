#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,d,perimeter,area,pi,r;
    /*
    first calculate the radius of the circle
    (a,b) is the coordinates of the center and (c,d) is the coordinates of the point on the circumference
    */
   a=0;
   b=0;
   c=4;
   d=5;
   r=sqrt(pow((a-c),2)+pow((b-d),2));
   perimeter =2*pi*r;
   pi=3.1416;
   area =pi*r*r;
   //printf("the r =%f",r);
   printf("the perimeter = %f",perimeter);
   printf("\n area =%f",area);


}