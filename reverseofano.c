/*
Problem statement: program to display the digits of a number.
sample input: 324
sample output: 423
*/
#include<stdio.h>
int main()
{
    int num, rem, rev=0, temp;
    printf("input a number:\n");
    scanf("%d",&num);
    temp=num;
    while(temp !=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    printf("The reverse of %d is %d \n",num, rev);
    return 0;
}