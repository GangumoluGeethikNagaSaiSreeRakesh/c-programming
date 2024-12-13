#include<stdio.h>
#include<math.h>
void main()
{
    int sum=0,rem,n,temp;
    printf("enter n value:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,3);
        n=n/10;
    }
    if(sum==temp)
    printf("The number %d is armstrong number",sum);
    else
    printf(" is not a armstrong number",sum);
}
