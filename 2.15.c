#include<stdio.h>
#include<math.h>
int main()
{
    /*
    here (a,b) and (c,d) is the two points that are the diameter of the circle
    */
   float a,b,c,d,diameter,r,pi,area;
   a=5;
   b=6;
   c=2;
   d=2;
   diameter =sqrt(pow((a-c),2)+pow((b-d),2));
   r=diameter/2;
   pi=3.1416;
   area =pi*r*r;
   printf("area =%f",area);
   
}