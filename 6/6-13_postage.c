//  postage.c -- first-class postage rates
//  - Listing 6.13, Chapter 6, C Primer Plus, 6th. Page 216.
//
//  Created by Yinghua Han on 7/21/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include  <stdio.h>

int main(void)
{
	const int FIRST_OZ = 46;	// 2013 rate
	const int NEXT_OZ = 20;		// 2013 rate
	int ounces, cost;

	printf(" ounces cost\n");
	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++,
		cost += NEXT_OZ)
		printf("%5d  $%4.2f\n", ounces, cost/100.0);

	return 0;
}