/* write a program that calculate the speed from the given distance and time information
*/
#include <stdio.h>
void main ()
{
    int distance,time,speed;
    printf("enter the distance (m) = ");
    scanf("%d",&distance);
     printf("enter the time (s) = ");
    scanf("%d",&time);
    speed = distance / time;
    printf(" speed = %d m/s",speed);
   
}