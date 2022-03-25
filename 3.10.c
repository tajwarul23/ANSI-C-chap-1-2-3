#include<stdio.h>
int main ()
{
   int noDays,years,weeks,days;
   printf("Enter the number of days =");
   scanf("%d",&noDays);
   years =noDays/365;
   weeks=(noDays%365)/7;
   days=(noDays%365)%7;
   printf("%ddays = %d years,%d weeks,%d days",noDays,years,weeks,days);
}