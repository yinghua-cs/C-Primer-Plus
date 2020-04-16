//
//  3-ex4_floatformat.c - print out floating-point value of different formats
//  - Solution to Programming Exercise 4, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	float f;

	printf("Enter a floating-point value:");
	scanf("%f", &f);
	printf("fixed-point notation: %f\n", f);
	printf("exponential notation: %e\n", f);
	printf("p notation: %a\n", f);

	return 0;

}