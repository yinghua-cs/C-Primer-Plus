//  print2.c -- more printf() properties (with some escape sequences trials)
//  - Listing 3.4, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 11/17/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.

#include <stdio.h>

int main(void)
{
	unsigned int un = 3000000000;		// system with 32-bit int (4 bytes)
	short end = 200;					// and 16-bit short (2 bytes)
	long big = 65537;					// 8 bytes
	long long verybig = 12345678908642;	// 8 bytes

	printf("un = %u and not %d\v", un, un);
	printf("end = %hd and %d\v", end, end);
	printf("big = %ld and %#x not %hd\t", big, big, big);
	printf("verybig = %lld and %ld\f", verybig, verybig);
	printf("long size is %d, long long size is %d\n", sizeof(long), sizeof(long long));
	// \v and \f have similar effects

	return 0;
}