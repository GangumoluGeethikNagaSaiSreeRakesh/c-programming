#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("enter values of a,b and op:");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case '+':printf("The addition is %d",a+b);
        break;
        case '-':printf("The subtraction is %d",a-b);
        break;
        case '*':printf("The mutiplication is %d",a*b);
        break;
        case '/':printf("The division is %d",a/b);
        break;
        case '%':printf("The remainder is %d",a%b);
        break;
        default:printf("Invaild op");
        break;
    }
}
