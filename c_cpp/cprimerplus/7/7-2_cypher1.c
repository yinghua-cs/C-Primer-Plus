//  cypher1.c -- alters input, preserving spaces
//  - Listing 7.2, Chapter 7, C Primer Plus, 6th. Page 250.
//
//  Created by Yinghua Han on 9/9/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# define SPACE ' '				// that's quote-space-quote

int main(void)
{
	char ch;

	ch = getchar();				// read a character
	while (ch != '\n')			// while not end of line
	{
		if (ch == SPACE)		// leave the space
			putchar(ch);		// character unchanged
		else
			putchar(ch + 1);	// change other characters
		ch = getchar();			// get next character
	}
	putchar(ch);				// print the newline
	
	return 0;
}