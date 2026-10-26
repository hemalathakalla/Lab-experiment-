#include<stdio.h>
int main()
{
    int a,b,add,sub,multiply,num;
    float division ;
    printf("Enter a,b values:");
    scanf("%d%d",&a,&b);
    printf("Enter number(1-additoin,2-subtraction,3-mutliplication,4-division):");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        add=a+b;
        printf("sum=%d",add);
        break;
    case 2:
        sub=a-b;
        printf("subtraction=%d",sub);
        break;
    case 3:
        multiply=a*b;
        printf("multiplication=%d",multiply);
        break;
    case 4:
        if (b==0)
            printf("Division by zero is not possible");
        else
        {
            division =(float)a/b;
            printf("Division=%f",division);
        }
        break;
    default:
        printf("Invalid option");
    }
}