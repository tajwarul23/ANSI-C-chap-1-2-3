
#include <stdio.h>
#include<string.h>
int main()
{
    char itemName[30];
    float rice =16.75;
    float sugar =15.00;
    printf(" type item =",itemName);
    scanf("%s",itemName);

    if (strcmp(itemName, "rice") == 0)
{
    printf("one kg of rice =%f",rice);
}
else
{
    printf("one kg of sugar =%f",sugar);
}

    return 0;
}


