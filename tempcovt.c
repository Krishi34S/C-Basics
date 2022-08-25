#include<stdio.h>
int main()
{
    float fah,cent;
    printf("Enter value of fah temp\n");
    scanf("%f",&fah);
    cent=(fah-32)*0.55;
    printf("The value in centigrade is=%f",cent);
    return 0;
}