#include<stdio.h>
int main()
{
    int choice;
    float c,f;
    printf("1.Celcius to fahrenhiet:\n");
    printf("2.Fahrenhiet to celcius:\n");
    printf("Enter your choice[1/2]:\n");
    scanf("%d",&choice);

switch(choice)
{
    case 1:
    printf("Input temp. in celcius\n");
    scanf("%f",&c);
    f=(9.0/5.0)*c+32.0;
    printf("%.2f C is converted into %.2f F",c,f);
    break;

    case 2:
    printf("Input temp. in fahrenhiet\n");
    scanf("%f",&f);
    c=(5.0/9.0)*(f-32.0);
    printf("%.2f F is converted into %.2f C",f,c);
    break;

    default: printf("Invalid Input!!!");
}    
    return 0;
}