//
//  7-ex9_prime.c - prints out the prime numbers.
//  - Solution to Programming Exercise 9, Chapter 7, C Primer Plus, 6th. Page 297
//
//  - Write a program that accepts a positive integer as input and then displays all the prime 
//	  numbers smaller than or equal to that number.
//
//  Created by Yinghua Han on 10/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>
# include <stdbool.h>
# include <math.h>

bool isPrime(int n);

int main(void)
{
	int n, i;

	printf("Enter a positive integer:\n");
	scanf("%d", &n);

	if (n <= 1)
	{
		printf("No prime numbers smaller than %d.\n", n);
		return 0;
	}

	printf("The prime numbers smaller than %d are:\n", n);
	for (i = 2; i <= n; i++)
	{
		if (isPrime(i))
			printf("%d ", i);

	}
	printf("\n");
	
	return 0;
}

bool isPrime(int n)
{
	int i;
	double sqrtN;

	sqrtN = sqrt(n);

	if (n < 2)
		return false;
	else if (sqrtN < 2)
		return true;
	else	// n > 2 and sqrt(n) >= 2
	{
		if ((n % 2 == 0) && n != 2)
			return false;
		for (i = 3; i < (sqrtN + 1); i += 2)	// check odd positive integers only, from 3 to n's square root
		{
			if (n % i == 0 && n != i)
				return false;
		}
		return true;
	}
}