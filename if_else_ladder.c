/*Program to get the name of the day with respect to N\no. alotted to it
input: a number to check the day
output: the day in words.
*/
#include<stdio.h>
int main()
{
    int day;
    printf("Input day number to get the day(1-7):");
    scanf("%d",&day);
    if(day==1)
        printf("Monday\n");
    else if(day==2)
        printf("Tuesday\n");
    else if(day==3)
        printf("Wednesday\n");
    else if(day==4)
        printf("Thursday\n");
    else if(day==5)
        printf("Friday\n");
    else if(day==6)
        printf("Saturday\n");
    else if(day==7)
        printf("Sunday\n");
    else
        printf("Invalid Number!!\n");
return 0;
}