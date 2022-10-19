#include<stdio.h>
int main()
{
    int a[100], num, i, max, min;
    printf("How many:\n");
    scanf("%d",&num);
//reading inputs
for(i=1; i<num; i++)
    {
        scanf("%d",&a[i]);
    }
    min = a[0];
    for(i=1; i<num; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    printf("\nMinimum = %d", min);
    return 0;
}