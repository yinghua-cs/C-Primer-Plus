//  row1.c -- uses nested loops
//  - Listing 6.17, Chapter 6, C Primer Plus, 6th. Page 224-225.
//
//  Created by Yinghua Han on 7/25/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

# define ROWS 6
# define CHARS 10

int main(void)
{
	int row;
	char ch;

	for (row = 0; row < ROWS; row++)
	{
		for (ch = 'A'; ch < ('A' + CHARS); ch++)
			printf("%c", ch);
		printf("\n");
	}

	return 0;
}