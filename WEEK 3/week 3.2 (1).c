#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,A,ci;
    printf("Enter principal,time,rate:");
    scanf("%f%f%f",&p,&t,&r);
    A=p*pow((1+r/100.0),t);
    ci=A-p;
    printf("compound interest=%f",ci);
    return 0;
}