//  width.c -- field widths
//  - Listing 4.7, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/29/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

# define PAGES 959

int main(void)
{
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n", PAGES);

	return 0;
}