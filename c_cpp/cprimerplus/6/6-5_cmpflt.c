//  cmpflt.c -- floating-point comparisons
//  - Listing 6.5, Chapter 6, C Primer Plus, 6th. Page 198.
//
//  Created by Yinghua Han on 7/19/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <math.h>
# include <stdio.h>

int main(void)
{
	const double ANSWER = 3.14159;
	double response;

	printf("What is the value of pi?\n");
	scanf("%lf", &response);

	while (fabs(response - ANSWER) > 0.0001)
	{
		printf("Try again!\n");
		scanf("%lf", &response);
	}
	printf("Close enough!\n");

	return 0;
}