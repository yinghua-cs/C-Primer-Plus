//  floatcnv.c -- mismatched floating-point conversions
//  - Listing 4.12, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 5/11/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;	// 2*10^9
	long n4 = 1234567890;

	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);	// 3.0e+00 3.0e+00 0.0e+00 0.0e+00
	printf("%ld %ld\n", n3, n4);						// 2000000000 1234567890
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);		// 2000000000 1234567890 -2227113035040096088 77992

	return 0;
	
}