//Program to deternmine the length o a string without using library functions from string.h

#include<stdio.h>
//#include<string.h>
int main()
{
    char str[100];
    int i=0, len=0;
    
    scanf("%[^\n]",str);
  
    while (str[i] != '\0')
    {
       i++;
       len++;
    }

    //len=strlen(str);
    
    printf("%s is of length %d",str,len);
    
    return 0;
}