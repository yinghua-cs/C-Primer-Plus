//  floaterr.c -- demonstrates round-off error
//  - Floating-Point Round-off Errors, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 3/29/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	float a,b;

	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);	
	// result: 4008175468544.000000 
	// reason: it needs 21-digit precision but a float number can only hold 6 or 7 digit of precision. 

	return 0;

}