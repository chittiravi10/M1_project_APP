#include "calculator.h"

int main()
{
    
    printf("enter the operation needed: ");
    char x=getchar();
    switch (x)
    {
        int a2,b2;
        float a3,b3;
    case '+': printf("enter numbers to be added (space between numbers is required) \ninput: ");
              scanf("%d %d",&a2,&b2);
              printf("sum is :%d \n",addition(a2,b2));
              break;
    case '-': printf("enter numbers to be subtracted (space between numbers is required) \ninput: ");
              scanf("%d %d",&a2,&b2);
              printf("sub is: %d \n",subraction(a2,b2));
              break;
    
    case '*': printf("enter numbers to be multiplied (space between numbers is required) \ninput: ");
              scanf("%d %d",&a2,&b2);
              printf("product is: %d \n",multiplication(a2,b2));
              break;
    case '/': printf("enter numerator and denominator (space between numbers is required) \ninput: ");
              scanf("%f %f",&a3,&b3);
              if(b3==0)
              {
                  printf("invalid input \n '0' cant be the denominator\n");
              }
              else

              printf("quitoent is: %lf \n",division(a3,b3));
              break;
    
    case 'q': printf("thank you \n");
              exit;
              break;


    default: printf("invalid input \n");
            
            break;
    }
    
}
