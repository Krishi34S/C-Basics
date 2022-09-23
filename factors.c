#include<stdio.h>
int main()
{
    int i, num;
    printf("Please enter any positive integer:\n");
    scanf("%d",&num);
    printf("Factors of %d are:",num);
    for(i=1; i <= num; i++)
    {
        if(num % i == 0)
        printf("%d,",i);
    }
    return 0;
}