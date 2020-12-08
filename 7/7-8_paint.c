//  paint.c -- uses conditional operator
//  - Listing 7.8, Chapter 7, C Primer Plus, 6th. Page 272.
//
//  Created by Yinghua Han on 9/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

# define COVERAGE 350		// square feet per paint can

int main(void)
{
	int sq_feet;
	int cans;

	printf("Enter number of square feet to be painted:\n");
	while (scanf("%d", &sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
		printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
		printf("Enter next value (q to quit):\n");
	}

	return 0;
}