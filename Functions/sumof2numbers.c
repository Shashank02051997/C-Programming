/*Use of functions*/
#include<stdio.h>
main()
{
    float sum(float,float);
    float x,y,a;
    printf("Enter the value of x:\n");
    scanf("%f",&x);
    printf("Enter the value of y:\n");
    scanf("%f",&y);
     a=x+y;
    a=sum(x,y);
    printf("The sum of x and y is %f.\n",a);
}
float sum(float x,float y)
{
    float z;
    z=x+y;
    return z;
}
