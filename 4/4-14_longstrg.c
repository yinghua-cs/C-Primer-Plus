//  longstrg.c -- printing long strings
//  - Listing 4.14, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 6/8/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	printf("Here's one way to print a ");
	printf("long string.\n");
	printf("Here's another way to print a \
long string.\n");		// This line has to start at the far left, otherwise the printout will include the indent.
	printf("Here's the newest way to print a "
		"long string.\n");		// ANSI C

	return 0;

}