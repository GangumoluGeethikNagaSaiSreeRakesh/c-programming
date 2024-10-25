#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d;
    float r1,r2;
    printf("enter value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1=-b+sqrt(d/(2*a));
        r2=-b-sqrt(d/(2*a));
         printf("real and distinct");
        printf("enter values of r1,r2\n");
        printf("%f%f",r1,r2);
      
    }
    else if(d<0)
    {
        printf("real and imaginary");
    }
    else
    {
        r1=r2=-b/(2*a);
        printf("enter values of r1,r2");
        printf("%f%f",r1,r2);
        printf("real and equal");
    }
}
    
