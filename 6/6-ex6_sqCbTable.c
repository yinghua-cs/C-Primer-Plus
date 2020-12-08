//
//  6-ex6_sqCbTable.c - print out a table of square and cube between the input values
//  - Solution to Programming Exercise 6, Chapter 6, C Primer Plus, 6th. Page 242
//
//  Created by Yinghua Han on 8/24/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int bg, ed, i;

	printf("Please enter the lower limit for the table.\n");
	scanf("%d", &bg);

	printf("Please enter the upper limit for the table.\n");
	scanf("%d", &ed);

	printf("\n\n");

	for (i = bg; i <= ed; i++)
		printf("%d\t%ld\t%ld\n", i, (long)i * i, (long)i * i * i);

	return 0;

}