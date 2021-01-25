/**
* @file int2binary.c
* @brief This File contains implementation of logic to print pattern with
* given number of rows and columns
*
* @author Sunil Kumar
*
* @date 25/1/2021
*/

#include "../inc/header.h"

/**
* @brief This function will print pattern
* @author Sunil Kumar
* @param l: rows to print
* @param column: number of column to print
* @return none
* @date 25/1/2021
*/
void pattern(int32_t l, int32_t column)
{
	int32_t i,j,m=0,l;
	int32_t num;
	int32_t n;
	
	while(1)
	{
	for(i=-l;i<=l;i++)
	{
		m = i;
		if(m < 0)
		m = -m;
		for(num = 0;num < column;num++)
		{
			for(j=l;j>=0;j--)
			{
				if(j <= m)
				printf("* ");
				else
				{
					if(num == 0)
					printf(" ");
					else
					printf("  ");
				}
			}
		}
		printf("\n");
	}

}

}
