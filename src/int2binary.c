/**
* @file int2binary.c
* @brief This File contains implementation of logic to convert integer value
* in to binary format and print the same on the console
*
* @author Sunil Kumar
*
* @date 25/1/2021
*/

#include "../inc/header.h"

/**
* @brief This function will print integer value in binary format
* @author Sunil Kumar
* @param p: integer to be printed
* @return none
* @date 25/1/2021
*/
void int2binary(int32_t p)
{

	int32_t *i = NULL;
	int32_t p;
	int32_t j = 0;

	i = &p;

	for(j = 31;j>=0;j--)
	{
		if((*i>>j)&0x1)
		printf("1");
		else
		printf("0");	
	}
	printf("\n");
}
