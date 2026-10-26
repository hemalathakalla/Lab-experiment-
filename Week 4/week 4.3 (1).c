#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total;
    float avg;
    printf("Enter s1,s2,s3,s4,s5:");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    avg=(s1+s2+s3+s4+s5)/5.0;
    printf("total=%d",total);
    printf("\naverage=%f",avg);
    return 0;

}