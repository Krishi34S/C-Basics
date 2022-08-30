#include<stdio.h>
int main()
{
    int count, term, n;
    printf("Enter no. of terms to be displayed\n");
    scanf("%d",&n);
    count=0;
    term=0;
    while(count<n)
    {
        term=term+2;
        printf("%d,",term);
        count++;
    }
    return 0;
}