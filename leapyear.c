/*Program to check if a year is Leap year or not*/
#include<stdio.h>
int main()
{
    int y;
    printf("Enter a year\n");
    scanf("%d",&y);
    if(y%4==0)
        printf("%d is a Leap year",y);
    else if(y%100==0)
        printf("%d is not a Leap Year",y);
    else if(y%400==0)
        printf("%d is a leap year",y);
    else
        printf("%d is not a leap year",y);
    return 0;
}