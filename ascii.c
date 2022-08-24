//Program finding ASCII values of any character
#include<stdio.h>
int main()
{
    char ch;
    printf("Input any character to get ASCII value of\n");
    scanf("%c",&ch);
    printf("ASCII value of %c is %d", ch, ch);
    return 0;
}