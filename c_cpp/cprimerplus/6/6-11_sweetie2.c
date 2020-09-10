//  sweetie2.c -- a counting loop using for
//  - Listing 6.11, Chapter 6, C Primer Plus, 6th. Page 208.
//
//  Created by Yinghua Han on 7/21/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	const int NUMBER = 22;
	int count;

	for (count = 1; count <= NUMBER; count++)				
		printf("Be my Valentine!\n");

	return 0;
}