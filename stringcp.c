//Program to copy and paste one string to another.

#include<stdio.h>
int main()
{
    //var dcl
    char str[100], strcp[100];
    int i=0, j=0;
    
    //scanf("%s",str)
    scanf("%[^\n]",str); //[^\n] skips "space" as a new line and counts it as a character

    //copy the src string to th destn string w/o library func
    while(str[i] != '\0')
    {
        strcp[j] = str[i];
        i++;
        j++;
    }
    //add NULL at the end to the destn string
    strcp[i]='\0';

    printf("copied %s",strcp);
    return 0;
}