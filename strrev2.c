//Program to reverse a string without using library function

#include<stdio.h>
int main()
{
    char str[100],rev[100];
    int begin, end, count=0;
    printf("Input a string:");
    gets(str);
    while (str[count] != '\0')
        count++; //Calculating string length.
    end = count - 1;
    for (begin = 0; begin < count; begin++){
        rev[begin] = str[end];
        end--;
    }
    rev[begin] = '\0';
    
    printf("The reverse is:\n %s", rev);
    return 0;
}