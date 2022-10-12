#include<stdio.h>
#include<string.h>
int main()
{
    int l;
    char msg[100];
    printf("Input a msg:\n");
    gets(msg);
    l = strlen(msg);
    printf("%s is of length %d", msg, l);
    return 0;
}