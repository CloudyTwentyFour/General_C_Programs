/**
* @file findendianess.c
* @brief This File contains implementation of logic to find out the endianess
* of the system
*
* @author Sunil Kumar
*
* @date 25/1/2021
*/

#include "../inc/header.h"

/**
* @brief This function will check if system endianess is Little or Big Endian
* @author Sunil Kumar
* @param none
* @return 1 if little endian or 0 if big endian
* @date 25/1/2021
*/
int32_t findEndianess(void)
{
	int32_t i=1;
	char *j;
	
	j = (char *)&i;	

	if(*j == 1)
	{
		printf("Little Endian\n");
		retval = 1;
	}
	else
	{
		printf("Big Endian\n");
		retval = 0;
	}
	
	return retval;
}
