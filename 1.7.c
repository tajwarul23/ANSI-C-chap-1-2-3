#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of a student to see zes grade : ");
    scanf("%d",&marks);
    if(marks>100 || marks<0)
    printf("Invalid Marks");
    else if(marks>=90)
    printf("Grade : O");
    else if(marks>=80)
    printf("Grade : E");
    else if(marks>=70)
    printf("Grade : A");
    else if(marks>=60)
    printf("Grade : B");
    else if(marks>=50)
    printf("Grade : C");
    else if(marks>=40)
    printf("Grade : D");
    else
    printf("Grade : FAIL");
    return 0;
}
