//Program to copy and paste one string to another with string.h library functions.

#include<stdio.h>
#include<string.h>
int main()
{
    //var dcl
    char src[100], destn[100];
    int i=0, j=0;
    
    scanf("%[^\n]",src); //[^\n] skips "space" as a new line and counts it as a character

    //copy the src string to th destn string w/o library func
    strcpy(destn,src);


    printf("copied %s",destn);
    return 0;
}