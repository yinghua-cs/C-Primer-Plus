//  4-ex7_floatdouble.c - showing value in type float and double
//  - Solution to Programming Exercise 7, Chapter 4, C Primer Plus, 6th. Page 141-142
//
//  Created by Yinghua Han on 6/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# include <float.h>

int main(void)
{
	double dvalue;
	float fvalue;

	dvalue = 1.0/3.0;
	fvalue = 1.0/3.0;

	printf("%.4f, %.4f\n", dvalue, fvalue);
	printf("%.12f, %.12f\n", dvalue, fvalue);
	printf("%.16f, %.16f\n", dvalue, fvalue);
	printf("%d, %d\n", DBL_DIG, FLT_DIG);

	return 0;

}