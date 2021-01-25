/**
* @file variable_list_arg_func_pass_by_argu.c
* @brief This File contains implementation of variable list arguments function
* passing by argument
*
* @author Sunil Kumar
*
* @date 25/1/2021
*/

#include "../inc/header.h"
#include <stdarg.h>
/**
* @brief This function will add variable number of inputs
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
	
	printf("Total : %d\n",sum(3,a,b,c));
	printf("Total : %d\n",sum(4,a,b,c,d));
	
}

int32_t sum(int32_t p,...)
{
	int32_t i,num=0,sum=0;
	va_list v;
	
	va_start(v,p);

	for(i=0;i<p;i++)
	sum += num + va_arg(v,int32_t);
	
	return(sum);
}
