//  bases.c -- print 100 in decimal, octal, and hex
//  - Listing 3.3, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 11/14/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.

#include<stdio.h>

int main(void)
{
	// Initializing
	// int x = 100;	// decimal
	// int x = 0100;	// octal
	int x = 0xaa;	// hexadecimal

	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

	return 0;
}