//
//  6-ex11_reverseOrderIntegers.c - print input integers in reverse order
//  - Solution to Programming Exercise 11, Chapter 6, C Primer Plus, 6th. Page 243
//
//  Created by Yinghua Han on 8/24/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

# define SIZE 8

int main(void)
{
	int i, array[SIZE];

	printf("Enter %d integers: \n", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf("%d", &array[i]);

	printf("\nThese integers in reverse order are ");
	for (i = SIZE - 1; i >= 0; i--)
		printf("%d ", array[i]);

	printf("\n");

	return 0;
}
