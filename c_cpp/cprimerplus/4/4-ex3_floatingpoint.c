//  4-ex3_floatingpoint.c - printing floating-point number in different formats
//  - Solution to Programming Exercise 3, Chapter 4, C Primer Plus, 6th. Page 141
//
//  Created by Yinghua Han on 6/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	float f;

	printf("Please input a floating-point number.\n");
	scanf("%f", &f);

	printf("The input is %.1f or %.1e.\n", f, f);
	printf("The input is %+.3f or %.3E.\n", f, f);

	return 0;

}