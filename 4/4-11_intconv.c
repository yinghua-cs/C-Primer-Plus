//  intconv.c -- some mismatched integer conversions
//  - Listing 4.11, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 5/7/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

# define PAGES 336
# define WORDS 65618

int main(void)
{
	short num = PAGES;
	short mnum = -PAGES;

	printf("num as short and unsigned short: %hd %hu\n", num, num);		
	// num as short and unsigned short: 336 336

	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);	
	// -num as short and unsigned short: -336 65200

	printf("num as int and char: %d %c\n", num, num);		
	// num as int and char: 336 P
	// - Truncation: short(2 bytes) --> char(1 byte), it only takes 8 lower bits or the remainder of "modulo 256".

	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);	
	// WORDS as int, short, and char: 65618 82 R

	return 0;
}
