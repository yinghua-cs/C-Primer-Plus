//  shoes2.c -- calculates foot lengths for several sizes
//  - Listing 5.2, Chapter 5, C Primer Plus, 6th. Page 144.
//
//  Created by Yinghua Han on 6/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# define ADJUST 7.31				// one kind of symbolic constant

int main(void)
{
	const double SCALE = 0.333;		// another kind of symbolic constant
	double shoe, foot;

	printf("Shoe size (men's)    foot length\n");
	shoe = 3.0;
	while (shoe < 18.5)		// starting the while loop
	{						// start of block
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n", shoe, foot);
		shoe = shoe + 1.0;
	}						// end of block
	printf("If the shoe fits, wear it.\n");

	return 0;

}