//
//  6-ex9_diffDivProduct2.c - print the difference of two floating numbers divided by their product, using function
//  - Solution to Programming Exercise 9, Chapter 6, C Primer Plus, 6th. Page 242
//
//  Created by Yinghua Han on 8/24/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>
# include <math.h>

float Cal(float a, float b);

int main(void)
{
	float a, b;

	printf("Please enter two floating-point values (q to quit):\n");
	while (2 == scanf("%f %f", &a, &b))
	{
		printf("the difference of two floating numbers divided by their product is %f\n", Cal(a, b)) ;

	}

	printf("See you.\n");

	return 0;
}

float Cal(float a, float b)
{
	return fabs(a - b) / (a * b);
}