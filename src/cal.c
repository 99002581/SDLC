#include "cal.h"

void addition(int number1,int number2)
{
    
	int total;
    total=number1+number2;
    return total;
}
 
void subtraction(int number1,int number2)
{
    
	int total;
    total=number1-number2;
    return total; 
    
}
 
void multiplication(int number1,int number2)
{
    
	int total;
    
        total=number1*number2;
        
    return total;
}
 
float division(int number1,int number2)
{
    
	int total;
    
        total=number1/number2;
        
    
	return total;
}
 
void modulus(int number1,int number2)
{
    
    int	answer=0; 
    
    answer=number1%number2;
    return answer;
}
 
void power(double number, double power_of_number)
{
    
	double answer;
 
    answer=pow(number,power_of_number);
    return answer;
}
 
int factorial(int number)
{
    int i;
	int factorial=1;
	
    if (number<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }               
 
    for(i=1;i<=number;i++)
    factorial=factorial*i;
    return factorial;
    
}
