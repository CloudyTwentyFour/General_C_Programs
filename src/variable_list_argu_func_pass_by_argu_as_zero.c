/**
* @file variable_list_argu_func_pass_by_argu_as_zero.c
* @brief This File contains implementation of logic to variable list arguments function
* passing by argument as zero
*
* @author Sunil Kumar
*
* @date 25/1/2021
*/

#include "../inc/header.h"
#include <stdarg.h>
/**
* @brief This function will sum up the variable list of numbers
* @author Sunil Kumar
* @param none
* @return none
* @date 25/1/2021
*/
int32_t sum(int32_t n,...);
int32_t main(void)
{
	int32_t a,b,c,d;

	printf("Enter the number a\n");
	scanf("%d",&a);
	printf("Enter the number b\n");
	scanf("%d",&b);
	printf("Enter the number c\n");
	scanf("%d",&c);
	printf("Enter the number d\n");
	scanf("%d",&d);
	
	printf("Total : %d\n",sum(a,b,c,0));
	printf("Total : %d\n",sum(a,b,c,d,0));
	
}

int sum(int32_t p,...)
{
	int32_t i,num=0,sum=0;
	va_list v;
	
	va_start(v,p);

	while(i = va_arg(v,int32_t))
	{
		sum += i;
	}
	return(sum);
}
