//  charcode.c -- displays code number for a character
//  - Listing 3.5, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 11/21/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.

#include <stdio.h>

int main(void)
{
	// Printing chinese with octal value.
	// char ch, ch1, ch2;
	// ch = '\345';
	// ch1 = '\256';
	// ch2 = '\232';
	// printf("%c%c%c", ch, ch1, ch2);

	char ch;
	printf("Please enter a character.\n");
	scanf("%c", &ch); // user inputs character
	printf("The code for %c is %d.\n", ch, ch);

	return 0;

}