#include<stdio.h>
void main()
{
    int i,n;
    printf("enter n values:");
    scanf("%d",&n);
    long long int fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%lld",fact);
}
