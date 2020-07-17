//
//  5-ex2_nplus10.c - display a list from the entered value to value + 10
//  - Solution to Programming Exercise 2, Chapter 5, C Primer Plus, 6th. Page 187
//
//  Created by Yinghua Han on 7/14/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int n, i;

	printf("Please enter a integer: \n");
	scanf("%d", &n);

	i = 0;
	printf("Then a list from %d to %d is\n", n, n+10);
	while (i++ <= 10)
		printf("%d ", n++);

	printf("\n");

	return 0;
}