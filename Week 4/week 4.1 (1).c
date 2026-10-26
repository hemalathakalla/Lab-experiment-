#include<stdio.h>
int main()
{
    int A,B,C,D,E,F,G,a,b,c,d,i;
    printf("Enter A,B,C,D,E,F,G,i values:");
    scanf("%d%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G,&i);
    a=A+B*C+(D*E)+F*G;
    b=A/B*C-B+A*D/3;
    c=A+++B---A;
    d=(i++)+(++i);
    printf("\n%d",a);
    printf("\n%d",b);
    printf("\n%d",c);
    printf("\n%d",d);
    return 0;
}