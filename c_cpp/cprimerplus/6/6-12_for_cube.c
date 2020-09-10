//  for_cube.c -- using a for loop to make a table of cubes
//  - Listing 6.12, Chapter 6, C Primer Plus, 6th. Page 209.
//
//  Created by Yinghua Han on 7/21/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int num;

	printf("    n   n cubed\n");
	for (num = 1; num <= 6; num++)
		printf("%5d %5d\n", num, num * num * num);

	return 0;
}