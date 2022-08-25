#include<stdio.h>
int main()
{
    int *p,a;
    a=5;
    p=&a;
    a=1;
    printf("the pointer is %d",*p);
    return 0;
}