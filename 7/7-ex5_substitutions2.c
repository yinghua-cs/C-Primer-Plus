//
//  7-ex5_substitutions2.c - replace periods and exclamation marks.
//  - Solution to Programming Exercise 5, Chapter 7, C Primer Plus, 6th. Page 296
//
//  - Redo the following exercise using a switch.
//  - Using if else statements, write a program that reads input up to #, replaces each period 
//    with an exclamation mark, replaces each exclamation mark initially present with two 
//    exclamation marks, and reports at the end the number of substitutions it has made.
//
//  Created by Yinghua Han on 10/14/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	int subcount = 0;
	char ch;

	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case '.':
				putchar('!');
				subcount++;
				break;
			
			case '!':
				putchar('!');
				putchar('!');
				subcount++;
				break;
			
			default:
				putchar(ch);
		}
	}

	printf("\n%d substitution(s) is made.\n", subcount);

	return 0;
}