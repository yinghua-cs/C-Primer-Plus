//  badcount.c -- incorrect argument counts
//  - Listing 3.9, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/7/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n", n, m);		// too many arguments
	printf("%d %d %d\n", n);	// too few arguments
	printf("%d %d\n", f, g);	// wrong kind of values

	return 0;
	
}