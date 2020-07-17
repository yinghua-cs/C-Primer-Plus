//  rules.c -- precedence test
//  - Listing 5.7, Chapter 5, C Primer Plus, 6th. Page 156.
//
//  Created by Yinghua Han on 6/17/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int top, score;

	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
	printf("top = %d, score = %d\n", top, score);

	return 0;
	
}