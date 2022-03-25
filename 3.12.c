#include<stdio.h>
#include<math.h>
int main()
{
    int amount,notes;
    printf("Enter the Amount =");
    scanf("%d",&amount);
    //for 100 rupes note
    notes = amount/100;
    printf("there are %d of notes of 100 \n",notes);
    //for 50 rupes note
    amount-=notes*100;
    notes = amount/50;
    printf("there are %d of notes of 50 \n",notes);
    //for 20 rupes note
    amount-=notes*50;
    notes =amount/20;
    printf("there are %d of notes of 20 \n",notes);
    //for 10 rupes note
    amount-=notes*20;
    notes=amount/10;
    printf("there are %d of notes of 10",notes);
}