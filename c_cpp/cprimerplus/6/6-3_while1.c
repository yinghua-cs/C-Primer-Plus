//  while1.c -- watch your braces
//	bad coding creates an infinite loop
//  - Listing 6.3, Chapter 6, C Primer Plus, 6th. Page 195.
//
//  Created by Yinghua Han on 7/19/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int n = 0;

	while (n < 3)
		printf("n is %d\n", n);
		n++;
	printf("That's all this program does\n");

	return 0;
}