//
//  6-ex2_dollarSignPattern.c - shows a dollar sign pattern increasing by line
//  - Solution to Programming Exercise 2, Chapter 6, C Primer Plus, 6th. Page 241
//
//  Created by Yinghua Han on 8/23/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	const int LINE = 5;
	int i, j;

	for (i = 1; i <= LINE; i++)
	{
		for (j = 1; j <= i; j++)
			printf("$");
		printf("\n");
	}

	return 0;

}