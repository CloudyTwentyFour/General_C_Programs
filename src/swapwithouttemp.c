/**
* @file int2binary.c
* @brief This File contains implementation of logic to swapping 
* numbers in array without temporary number
*
* @author Sunil Kumar
*
* @date 25/1/2021
*/

#include "../inc/header.h"

/**
* @brief This function will swap numbers in array without temporary number 
* @author Sunil Kumar
* @param none
* @return none
* @date 25/1/2021
*/
void swap2numbers(void)
{
	int32_t array[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int32_t temp;	

	int32_t i,j;

	for(i=0,j=19;j>i;i++,j--)
	{
		array[i] = array[i] ^ array[j];
		array[j] = array[i] ^ array[j];
		array[i] = array[i] ^ array[j];
	}
	
	for(j=0;j<20;j++)
		printf("%d ",array[j]);
	printf("\n");

}
