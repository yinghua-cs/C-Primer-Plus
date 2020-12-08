//  cypher2.c -- alters input, preserving non-letters
//  - Listing 7.3, Chapter 7, C Primer Plus, 6th. Page 253.
//
//  Created by Yinghua Han on 9/10/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# include <ctype.h>				// for isalpha()

int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))		// if a letter
			putchar(ch + 1);	// display next letter
		else					// otherwise,
			putchar(ch);		// display as is
	}
	putchar(ch);				// display the newline
	
	return 0;
}