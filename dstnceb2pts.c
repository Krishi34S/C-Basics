#include<stdio.h>
#include<math.h>
int main()
{
    float x1, x2, y1, y2, dis;

    printf("Enter the first point(x1,y1):\n");
    scanf("%.2f%.2f",&x1,&y1);

    printf("Enter the second point(x2,y2):\n");
    scanf("%.2f%.2f",&x2,&y2);

    dis=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("The distance between the points (%.2f,%.2f) and (%.2f,%.2f) is:%.2f", x1,y1,x2,y2,dis);

    return 0;
}