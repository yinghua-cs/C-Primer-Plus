//
//  6-ex4_alphabetPattern2.c - shows a alphabet pattern increasing by line and in order
//  - Solution to Programming Exercise 4, Chapter 6, C Primer Plus, 6th. Page 241
//
//  Created by Yinghua Han on 8/23/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	const int LINE = 6;
	int i, j;
	char c;

	c = 'A';

	for (i = 0; i < LINE; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%c", c);
			c++;
		}
		printf("\n");
	}

	return 0;
}