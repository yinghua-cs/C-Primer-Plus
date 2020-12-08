//  defines.c -- uses defined constants from limits.h and float.h.
//  - Listing 4.5, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/25/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>
# include <limits.h>	// integer limits
# include <float.h>		// floating-point limits

int main(void)
{
	printf("Some number limits for this system:\n");
	printf("Biggest int: %d\n", INT_MAX);				// INT_MAX = 2^31-1 = 2147483647; INT_MIN = -2^31 = -2147483648
	printf("Smallest long long: %lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest double: %e\n",  DBL_MAX);
	printf("Smallest normal float: %e\n", FLT_MIN);		// FLT_MIN = 2^(-126) = 1.175494e-38; FLT_MAX = 2^128 = 3.402823E+38
	printf("float precision = %d digits\n", FLT_MIN_10_EXP);
	printf("float epsilon = %e\n", FLT_EPSILON);

	return 0;

}