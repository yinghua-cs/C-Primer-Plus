//  sweetie1.c -- a counting loop
//  - Listing 6.10, Chapter 6, C Primer Plus, 6th. Page 207.
//
//  Created by Yinghua Han on 7/21/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	const int NUMBER = 22;
	int count = 1;						// initialization

	while (count <= NUMBER)				// test
	{
		printf("Be my Valentine!\n");	// action
		count++;						// update count
	}

	return 0;
}