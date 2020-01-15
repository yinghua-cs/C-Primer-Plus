//  charcode.c -- displays code number for a character
//  - Listing 3.5, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 11/21/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.

#include <stdio.h>

int main(void)
{
	char ch;
	// ch = '\101';
	// printf("%c", c);

	printf("Please enter a character.\n");
	scanf("%c", &ch); // user inputs character
	printf("The coe for %c is %d.\n", ch, ch);

	return 0;

}