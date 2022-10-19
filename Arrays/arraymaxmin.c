//Find the maximum of n number using array
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
    max = a[0];
    for(i=1; i<num; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    printf("Maximum = %d", max);

    return 0;
}