#include<stdio.h>
#include<math.h>
int main()
{
    float km,fuel,mileage;
    printf("Enter the kilometers =");
    scanf("%f",&km);
    printf("Enter the amount of fuel =");
    scanf("%f",&fuel);
    mileage =km/fuel;
    printf("the mileage of the car = %.2f",mileage);
    return 0;
}