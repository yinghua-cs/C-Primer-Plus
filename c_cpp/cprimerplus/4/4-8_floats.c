//  floats.c -- some floating-point combinations
//  - Listing 4.8, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 5/4/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	const double RENT = 3852.99;	// const-style constant

	printf("*%F*\n", RENT);			// *3852.990000*
	printf("*%e*\n", RENT);			// *3.852990e+03*
	printf("*%4.2f*\n", RENT);		// *3852.99*
	printf("*%3.1f*\n", RENT);		// *3853.0*
	printf("*%10.3f*\n", RENT);		// *  3852.990*
	printf("*%10.3E*\n", RENT);		// * 3.853E+03*
	printf("*%+4.2f*\n", RENT);		// *+3852.99*
	printf("*%010.2f*\n", RENT);	// *0003852.99*
	printf("*%.f*\n", RENT);		// *3853*
	printf("*%.0f*\n", RENT);		// *3853*
	printf("*%.2g*\n", RENT);		// *3.9e+03*

	return 0;
	
}