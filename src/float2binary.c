/**
* @file float2binary.c
* @brief This File contains implementation of logic to convert float to
* binary format and print on the console
*
* @author Sunil Kumar
*
* @date 25/1/2021
*/

#include <stdio.h>
#include <stdint.h>

/**
* @brief This function will print float value in binary format
* @author Sunil Kumar
* @param num: float value
* @return none
* @date 25/1/2021
*/
void float2binary(float num)
{
	char *p;
	float num;
	int i;

	p = (char *)&num;

	for(i=31;i>=0;i--)
	{
		if((*p >> i)&0x1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
