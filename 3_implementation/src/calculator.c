#include"calculator.h"

int addition(int a,int b)
{
    
    int sum=0;

    sum=a+b;
    
    return sum;

}
int subraction(int a1,int b1)
{
    
    int sub=0;
    sub=a1-b1;
    return sub;

}
int multiplication(int a2,int b2)
{
    
    int mul;
    mul=a2*b2;
    return mul;
}
float division(float a3,float b3)
{
    float div=0;
    if(a3!=0 && b3!=0)
    {
    div=a3/b3;
    return div;
    }
    else 
    return 0;
}

