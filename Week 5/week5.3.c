#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,r1,r2;
    printf("Enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if (d>0)
    {
        r1=(-b+sqrt(d))/(2.0*a);
        r2=(-b-sqrt(d))/(2.0*a);
        printf("\nroot1=%f",r1);
        printf("\nroot2=%f",r2);
    }
    else if (d==0)
    {
        r1=-b/(2.0*a);
        r2=-b/(2.0*a);
        printf("\n root1=%f",r1);
        printf("\n root2=%f",r2);
    }
    else
        printf("No  real roots");
    return 0;
}