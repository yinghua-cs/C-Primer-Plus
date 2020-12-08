//
//  5-ex7_cube.c - calculate the cube of the value
//  - Solution to Programming Exercise 7, Chapter 5, C Primer Plus, 6th. Page 188
//
//  Created by Yinghua Han on 7/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
// 

# include <stdio.h>

void cube(double);

int main(void)
{
	double v;

	printf("Enter a number:\n");
	scanf("%lf", &v);

	cube(v);

	return 0;

}

void cube(double v)
{
	printf("the cube of %f is %f.\n", v, v * v *v);

}