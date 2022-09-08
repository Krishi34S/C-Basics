/*
Problem statement: Program to display the power series of any number to any term.
sample input: n^m, (n+1)^(m+1), (n+2)^(m+2),........ 
sample output: 
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int temp, count, num, n;
    printf("Enter the number to get the series of:");
    scanf("%d",&num);
    printf("Enter number of terms:");
    scanf("%d",&n);
    temp=num;
    count=0;
    while(count<n)
    {
        temp=pow(num,count);
        printf("%d,",temp);
        count++;
    }
    return 0;
}