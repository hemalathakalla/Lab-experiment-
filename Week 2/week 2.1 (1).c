#include<stdio.h>
 int main()
{
int a,b,c,sum;
float avg;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
avg=(a+b+c)/3.0;
printf("sum=%d",sum);
printf("\navg=%f",avg);
return 0 ;
}