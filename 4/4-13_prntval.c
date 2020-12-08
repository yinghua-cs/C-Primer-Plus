//  prntval.c -- finding printf()'s return value
//  - Listing 4.13, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 6/8/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int bph2o = 212;	// boiling point of H2O
	int rv;				// return value of printf()

	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("The printf() function printed %d characters.\n", rv);
	// 212 F is water's boiling point.
	// The printf() function printed 32 characters.
	// - printf()'s counting includes the character "\n".

	return 0;

}
