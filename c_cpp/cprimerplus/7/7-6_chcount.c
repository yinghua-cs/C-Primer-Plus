//  chcount.c -- use the logical AND operator
//  - Listing 7.6, Chapter 7, C Primer Plus, 6th. Page 263.
//
//  Created by Yinghua Han on 9/14/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

# define PERIOD '.'

int main(void)
{
	char ch;
	int charcount = 0;

	while ((ch = getchar()) != PERIOD)
	{
		if (ch != '"' && ch != '\'')	// 空格、回车都算的
			charcount++;
	}
	printf("There are %d non-quote characters.\n", charcount);

	return 0;
}