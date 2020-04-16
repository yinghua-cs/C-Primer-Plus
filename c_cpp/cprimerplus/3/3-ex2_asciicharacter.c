//
//  3-ex2_asciicharacter.c - print out ASCII character with ASCII code
//  - Solution to Programming Exercise 2, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	char c;

	printf("Please enter the ASCII code value: ");
	scanf("%d", &c);
	printf ("\nThe #%d of ASCII is %c.\n", c, c);

	return 0;
}