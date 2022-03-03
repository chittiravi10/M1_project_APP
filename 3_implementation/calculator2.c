#include "calculator.h"

int main()
{
    
    printf("enter the operation needed: ");
    char x=getchar();
    switch (x)
    {
    case '+': printf("enter numbers to be added (space between numbers is required) \ninput: ");
              int l=addition();
              printf("sum is :%d \n",l);
              break;
    case '-': printf("enter numbers to be subtracted (space between numbers is required) \ninput: ");
              int s=subraction();
              printf("sub is: %d \n",s);
              break;
    
    case '*': printf("enter numbers to be multiplied (space between numbers is required) \ninput: ");
              int m=multiplication();
              printf("product is: %d \n",m);
              break;
    case '/': printf("enter numbers to be divided (space between numbers is required) \ninput: ");
              double d=division();
              printf("quitoent is: %f \n",d);
              break;
    
    case 'q': printf("thank you \n");
              exit;
              break;


    default: printf("invalid input \n");
            main();
            break;
    }
    
}
