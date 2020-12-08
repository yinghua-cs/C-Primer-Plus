//  pound.c -- defines a function with an argument
//  - Listing 5.15, Chapter 5, C Primer Plus, 6th. Page 178.
//
//  Created by Yinghua Han on 6/27/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

void pound(int n);		// ANSI function prototype declaration

int main(void)
{
	int times = 5;
	char ch = '!';		// ASCII code is 33
	float f = 6.0f;

	pound(times);		// int argument
	pound(ch);			// same as pound((int)ch);
	pound(f);			// same as pound((int)f);

	return 0;
}

void pound(int n)		// ANSI-style function header
{						// says takes one int argument
	while (n-- > 0)
		printf("#");
	printf("\n");
}