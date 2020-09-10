//  when.c -- when a loop quits
//  - Listing 6.2, Chapter 6, C Primer Plus, 6th. Page 194.
//
//  Created by Yinghua Han on 7/19/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int n = 5;

	while (n < 7)
	{
		printf("n = %d\n", n);
		n++;
		printf("Now n = %d\n", n);
	}
	printf("The loop has finished.\n");

	return 0;
	
}