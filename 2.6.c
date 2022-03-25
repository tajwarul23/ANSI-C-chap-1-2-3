/* write a program that display the current date and time
*/
#include<stdio.h>
#include<time.h>
int main ()
{
    time_t currentTime;
    time(&currentTime);
    printf("The current date and time is: %s",ctime(&currentTime));
    return 0;
}