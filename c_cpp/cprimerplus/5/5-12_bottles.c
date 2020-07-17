//  bottles.c -- 
//  - Listing 5.12, Chapter 5, C Primer Plus, 6th. Page 164.
//
//  Created by Yinghua Han on 6/20/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# define MAX 100
int main(void)
{
	int count = MAX + 1;

	while (--count > 0)
	{
		printf("%d bottles of spring water on the wall, "
			"%d bottles of spring water!\n", count, count);
		printf("Take one down and pass it around,\n");
		printf("%d bottles of spring water!\n\n", count - 1);
	}

	return 0;
	
}