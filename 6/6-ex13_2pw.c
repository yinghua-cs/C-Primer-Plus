//
//  6-ex13_2pw.c - prints out the first eight powers of 2.
//  - Solution to Programming Exercise 13, Chapter 6, C Primer Plus, 6th. Page 243
//
//  Created by Yinghua Han on 9/6/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

#define SIZE 8

int main(void)
{
	int arr[SIZE], i;

	// set values
	arr[0] = 1;

	for (i = 1; i < SIZE; i++)
	{
		arr[i] = 2 * arr[i - 1];
	}

	// print values
	i = 0;
	printf("The first %d powers of 2 are \n", SIZE);
	do
	{
		printf("%d ", arr[i]);
		i++;

	}while (i < SIZE);
	printf("\n");

	return 0;
}