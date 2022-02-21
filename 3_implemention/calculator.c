// Calculator eaample using C code
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#define KEY "Enter the calculator Operation you want to do:"


void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
void calculator_operations();

// Start of Main Program
int main()
{
    int a=1;
    char input;

    // Function call 
    calculator_operations();

    while(a)
    {
        printf("\n");
        printf("%s : ", KEY);

        input=KEY ;

        switch(input)
        {
            case '0': addition();
                      break;

            case '1': subtraction();
                      break;

            case '2': multiplication();
                      break;

            case '3': division();
                      break;

            case '4': modulus();
                      break;

            case '5': factorial();
                      break;

            case '6': power();
                      break;

            case 'H':
            case 'h': calculator_operations();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;

            default : system("cls");

    printf("\ninvalid input");
   
    printf("\n Enter any one of below available ");
    printf("options\n");
                      calculator_operations();
        }
    }
}

//Function Definitions

void calculator_operations()
{
    //system("cls");  use system function to clear 
    //screen instead of clrscr();
    printf("\n             Welcome to C calculator \n\n");

    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'D' or 'd' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");

    printf("Enter 0 symbol for Addition \n");
    printf("Enter 1 symbol for Subtraction \n");
    printf("Enter 2 symbol for Multiplication \n");
    printf("Enter 3 symbol for Division \n");
    printf("Enter 4 symbol for Modulus\n");
    printf("Enter 5 symbol for Power \n");
    printf("Enter 6 symbol for Factorial \n\n");
}

void addition()
{
    int n, total=0, k=0, number;
    printf("\nEnter the number of elements you want to add:");
    scanf("%d",&n);
    printf(" enter %d numbers one by one: \n",n);
    while(k<n)
    { 
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers = %d \n",n,total);
}

void subtraction()
{ 
    int a, b, c = 0; 
    printf("\n enter first number  : "); 
    scanf("%d", &a); 
    printf(" enter second number : "); 
    scanf("%d", &b); 
    c = a - b; 
    printf("\n%d - %d = %d\n", a, b, c); 
}

void multiplication()
{
    int a, b, mul=0; 
    printf("\n enter first numb   : "); 
    scanf("%d", &a); 
    printf(" enter second number: "); 
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
}

void division()
{
    int a, b, d=0; 
    printf("\n enter first number  : "); 
    scanf("%d", &a); 
    printf(" enter second number : "); 
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}

void modulus()
{
    int a, b, d=0; 
    printf("\n enter first number   : "); 
    scanf("%d", &a); 
    printf(" enter second number  : "); 
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}

void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);

    printf("power : ");
    scanf("%lf",&num);

    p=pow(a,num);

    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}

int factorial()
{
    int i,fact=1,num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\n enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }               

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}