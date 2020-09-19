#include "cal.h"
int main()
{
int choice;
int digit1;
int digit2;
printf("Calculator\n\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Modulus\n");
printf("6. Power\n");
printf("7. Factorial\n");
printf("enter your choice \n");
scanf("%d",&choice);
switch(choice)
{
	case 1:printf("enter 2 digits ");
           scanf("%d %d\n",&digit1,&digit2);
	       printf("%d",addition(digit1,digit2));
		   printf("\n");
		   break;
    case 2: printf("enter 2 digits ");
            scanf("%d %d\n",&digit1,&digit2);
	        printf("%d",subtraction(digit1,digit2));
			printf("\n");
	        break;
    case 3: printf("enter 2 digits ");
            scanf("%d %d\n",&digit1,&digit2);
	        printf("%d",multiplication(digit1,digit2));
			printf("\n");
	        break;
    case 4: printf("enter 2 digits ");
            scanf("%d %d\n",&digit1,&digit2);
	        printf("%f",division(digit1,digit2));
			printf("\n");
	        break;
    case 5: printf("enter 2 digits ");
            scanf("%d %d\n",&digit1,&digit2);
	        printf("%d",modulus(digit1,digit2));
			printf("\n");
	        break;
    case 6: printf("enter number and power digits ");
            scanf("%d %d\n",&digit1,&digit2);
	        printf("%d",power(digit1,digit2));
			printf("\n");
	        break;
    case 7: 
	        printf("enter a digit ");
            scanf("%d",&digit1);
	        printf("%d",factorial(digit1));
			printf("\n");
	        break;
}
return 0;
}
