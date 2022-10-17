#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string to be reversed:\n");
    scanf("%[^\n]",str);
    printf("Reverse is: %s", strrev(str));
    return 0;
}