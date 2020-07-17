//  add_one.c -- incrementing: prefix and postfix
//  - Listing 5.10, Chapter 5, C Primer Plus, 6th. Page 160.
//
//  Created by Yinghua Han on 6/20/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int ultra = 0, super = 0;

	while (super < 5)
	{
		super++;
		++ultra;
		printf("super = %d, ultra = %d \n", super, ultra);
	}

	return 0;
}