#include "cal.h"

int addition(int number1,int number2)
{
    
	int total;
    total=number1+number2;
    return total;
}
 
int subtraction(int number1,int number2)
{
    
	int total;
    total=number1-number2;
    return total; 
    
}
 
int multiplication(int number1,int number2)
{
    
	int total;
    
        total=number1*number2;
        
    return total;
}
 
float division(int number1,int number2)
{
    
	float total;
    
        total=number1/number2;
        
    
	return total;
}
 
int modulus(int number1,int number2)
{
    
    int	answer=0; 
    
    answer=number1%number2;
    return answer;
}
 
int power(int number, int power_of_number)
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
