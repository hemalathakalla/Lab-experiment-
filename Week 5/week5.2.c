#include<stdio.h>
int main()
{
    int units;
    float a;
    printf("Enter electricity units:");
    scanf("%d",&units);
    if (units<=100)
    {
        a=units*1.50;
        printf("Bill=%f",a);
    }
    else if (units>=101 && units<=200)
    {
        a=units*2.50;
        printf("Bill=%f",a);
    }
    else  if (units>=201&&units<=500)
    {
        a=units*4;
        printf("Bill=%f",a);
    }
    else
    {
        a=units*6;
        printf("Bill=%f",a);
    }
    return 0 ;

}