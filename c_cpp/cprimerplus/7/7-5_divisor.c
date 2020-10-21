//  divisor.c -- nested ifs display divisors of a number
//  - Listing 7.5, Chapter 7, C Primer Plus, 6th. Page 261.
//
//  Created by Yinghua Han on 9/13/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# include <stdbool.h>

int main(void)
{
	unsigned long num;			// number to be checked
	unsigned long div;			// potential divisors
	bool isPrime;				// prime flag

	printf("Please enter an integer for analysis; ");
	printf("Enter q to quit.\n");
	while (scanf("%lu", &num) == 1)
	{
		for (div = 2, isPrime = true; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
					printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
				else 
					printf("%lu is divisible by %lu.\n", num, div);
				isPrime = false;// number is not prime
			}
		}
		if (isPrime)
			printf("%lu is prime.\n", num);
		printf("Please enter another integer for analysis; ");
		printf("Enter q to quite.\n");
	}
	printf("Bye.\n");

	return 0;
}