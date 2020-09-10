//  summing.c -- sums integers entered interactively
//  - Listing 6.1, Chapter 6, C Primer Plus, 6th. Page 190.
//
//  Created by Yinghua Han on 7/17/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	long num;
	long sum = 0L;		/* initialize sum to zero */
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	status = scanf("%ld", &num);
	while (status == 1)	/* == means "is equal to"	*/
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;

}