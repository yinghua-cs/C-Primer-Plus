//  trouble.c -- misuse of =
//  - Listing 6.8, Chapter 6, C Primer Plus, 6th. Page 201.
//
//  Created by Yinghua Han on 7/20/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	status = scanf("%ld", &num);
	while (status = 1)	// test in gcc version 9.3.0, it will give out warning
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;

}