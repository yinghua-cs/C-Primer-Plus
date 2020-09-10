//
//  6-ex12_infTotal.c - sums two infinite series and prints out the totals
//  - Solution to Programming Exercise 12, Chapter 6, C Primer Plus, 6th. Page 243
//
//  Created by Yinghua Han on 9/6/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	int n, i, sign;
	float s1, s2;

	printf("Please enter a number of terms: ");
	scanf("%d", &n);

	s1 = s2 = 0;
	sign = 1;

	while (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			s1 += 1.0 / i;
			s2 += sign * 1.0 / i;
			sign *= -1;
		}

		printf("the totals of %d terms are %f and %f\n", n, s1, s2);

		printf("Please enter a number of terms: ");
		scanf("%d", &n);

		s1 = s2 = 0;
		sign = 1;
		
	}

	printf("Bye~\n");

	return 0;


}