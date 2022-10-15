//Program to change the cases of an input string.

#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    int i=0;
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        if(isupper(str[i]))
            str[i]=tolower(str[i]);
        else
            str[i]=toupper(str[i]);
        i++;
    }
    printf("case coverted %s",str);
    return 0;
}