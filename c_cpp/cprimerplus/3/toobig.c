//  toobig.c - exceeds maximum int size on our system
//  - toobig.c, integer overflow, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 11/14/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.

#include <stdio.h>

int main(void)
{
	int i = 2147483647;	// 32 bits
	unsigned int j = 4294967295;

	// Compiler gives overflow warning, if the value exceeds the range.
	// int i = 2147483647 + 1;
	// unsigned int j = 4294967295 + 1;

	printf("%D %d %#X %d\n", i, i+1, i+1, i+2);	
	// 2147483647 -2147483648 0x80000000 -2147483647

	printf("%u %u %u\n", j, j+1, j+2);
	// 4294967295 0 1

	return 0;
}