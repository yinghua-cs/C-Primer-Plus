//  boolean.c -- using a _Bool variable
//  - Listing 6.9, Chapter 6, C Primer Plus, 6th. Page 204.
//
//  Created by Yinghua Han on 7/20/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# include <stdbool.h>	/* for bool, also true, false	*/

int main(void)
{
	long num;
	long sum = 0L;
	bool input_is_good;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	input_is_good = (scanf("%ld", &num) == 1);
	while (input_is_good)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("Those integers sum to %ld.\n", sum);

	return 0;

}