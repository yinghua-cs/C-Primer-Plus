//
//  7-ex4_substitutions.c - replace periods and exclamation marks.
//  - Solution to Programming Exercise 4, Chapter 7, C Primer Plus, 6th. Page 296
//
//  - Using if else statements, write a program that reads input up to #, replaces each period 
//    with an exclamation mark, replaces each exclamation mark initially present with two 
//    exclamation marks, and reports at the end the number of substitutions it has made.

//
//  Created by Yinghua Han on 10/13/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	int subcount = 0;
	char ch;

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			subcount++;
		}
		else if (ch == '!')
		{
			putchar('!');
			putchar('!');
			subcount++;
		}
		else
			putchar(ch);
	}

	printf("%d substitution(s) is made.\n", subcount);

	return 0;
}