#include"calculator.h"

int addition()
{
    int a,b;
    int sum=0;
    scanf("%d %d",&a,&b);
    sum=a+b;
    
    return sum;

}
int subraction()
{
    int a1,b1;
    int sub=0;
    scanf("%d %d",&a1,&b1);
    sub=a1-b1;
    return sub;

}
int multiplication()
{
    int a2,b2;
    int mul;
    scanf("%d %d",&a2,&b2);
    mul=a2*b2;
    return mul;
}
int division()
{
    int a3,b3;
    double div;
    scanf("%d %d",&a3,&b3);
    if(a3!=0 && b3!=0)
    {
    div=a3/b3;
    return div;
    }
    else 
    return 0;
}
int square()
{
    int a;
    int p=1;
    scanf("%d",&a);
    p=p*a;
    p=p*a;
    return p;
}
