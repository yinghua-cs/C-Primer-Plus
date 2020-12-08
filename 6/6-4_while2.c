//  while2.c -- watch your semicolons
//  - Listing 6.4, Chapter 6, C Primer Plus, 6th. Page 196.
//
//  Created by Yinghua Han on 7/19/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int n = 0;

	while (n++ < 3);
		printf("n is %d\n", n);
	printf("That's all this program does.\n");

	return 0;
}