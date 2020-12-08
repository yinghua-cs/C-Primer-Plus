//
//  6-ex8_diffDivProduct.c - print the difference of two floating numbers divided by their product
//  - Solution to Programming Exercise 8, Chapter 6, C Primer Plus, 6th. Page 242
//
//  Created by Yinghua Han on 8/24/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>
# include <math.h>

int main(void)
{
	float a, b;

	printf("Please enter two floating-point values (q to quit):\n");
	while (2 == scanf("%f %f", &a, &b))
	{
		printf("the difference of two floating numbers divided by their product is %f\n", fabs(a - b) / (a * b));

	}

	printf("See you.\n");

	return 0;
}