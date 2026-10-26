#include<stdio.h>
int main()
{
    float f,c;
    printf("\nEnter temperature in celsius:");
    scanf("%f",&c);
    f=(c*9.0/5.0)+32.0;
    printf("\nfahrenheit=%f",f);
    printf("\nEnter temperature in fahrenheit:");
    scanf("%f",&f);
    c =(f-32.0)*5.0/9.0;
    printf("\ncelsius=%f",c);
    return 0;
}