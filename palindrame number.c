#include<stdio.h>
void main()
{
    int rev=0,rem,n,temp;
    printf("enter n value:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        
        n=n/10;
        
    }
    if(rev==temp)
    printf("The number is palindrame number");
    else
    printf("not a palindrame number");
}
