#include<stdio.h>
void main()
{
    int rev=0,rem,n;
    printf("enter n value:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The reverse of number is:%d",rev);
}
