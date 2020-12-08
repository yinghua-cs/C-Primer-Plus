//  squares.c -- produces a table of first 20 squares
//  - Listing 5.4, Chapter 5, C Primer Plus, 6th. Page 151.
//
//  Created by Yinghua Han on 6/17/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int num = 1;

	while (num < 21)
	{
		printf("%4d %6d\n", num, num * num);
		num = num + 1;
	}

	return 0;
	
}