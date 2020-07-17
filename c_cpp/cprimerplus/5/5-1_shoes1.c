//  shoes1.c -- converts a shoe size to inches
//  - Listing 5.1, Chapter 5, C Primer Plus, 6th. Page 144.
//
//  Created by Yinghua Han on 6/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# define ADJUST 7.31				// one kind of symbolic constant

int main(void)
{
	const double SCALE = 0.333;		// another kind of symbolic constant
	double shoe, foot;

	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf("Shoe size (men's)    foot length\n");
	printf("%10.1f %15.2f inches\n", shoe, foot);

	return 0;

}