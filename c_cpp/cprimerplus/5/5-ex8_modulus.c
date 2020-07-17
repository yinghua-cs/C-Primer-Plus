//
//  5-ex8_modulus.c - displays the modulus operations results
//  - Solution to Programming Exercise 8, Chapter 5, C Primer Plus, 6th. Page 188
//
//  Created by Yinghua Han on 7/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
// 

# include <stdio.h>

int main(void)
{
	int m1, m2;		// calculates the result of m1 % m2

	printf("This program computes moduli.\n"
		"Enter an integer to serve as the second operand:");
	scanf("%d", &m2);

	printf("Now enter the first operand:");
	scanf("%d", &m1);

	while (m1 > 0)
	{
		printf("%d %% %d is %d\n", m1, m2, m1 % m2);

		printf("Enter next number for first operand (<= 0 to quit):\n");
		scanf("%d", &m1);
	}

	printf("Done\n");
	
	return 0;
}