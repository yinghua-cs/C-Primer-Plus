//  sizeof.c -- uses sizeof operator
//  - Listing 5.8, Chapter 5, C Primer Plus, 6th. Page 158.
//
//  Created by Yinghua Han on 6/17/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int n = 0;
	size_t intsize;

	intsize = sizeof (int);
	printf("n = %d, n has %zd bytes; all ints have %zd bytes. \n",
	n, sizeof n, intsize);

	return 0;
	
}