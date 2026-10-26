#include<stdio.h>
int main()
{
    float principal,rate,time,interest;
    printf("Enter principal,rate,time:");
    scanf("%f%f%f",&principal,&rate,&time);
    interest=(principal*rate*time)/100;
    printf("\n Interest=%f",interest);
    return 0;
}