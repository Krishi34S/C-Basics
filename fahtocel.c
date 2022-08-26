#include<stdio.h>
int main()
{
    float c,f;
    printf("Input temp. in celcius\n");
    scanf("%f",&c);
    f=(9.0/5.0)*c+32.0;
    printf("%.2f C is converted into %.2f F",c,f);
    return 0;
}