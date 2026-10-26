#include<stdio.h>
#include<math.h>
void main()
{
    float s,a,b,c,area;
    printf("Enter sides of triangle:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle=%f",area);
}