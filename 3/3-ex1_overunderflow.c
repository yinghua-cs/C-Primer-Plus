//
//  3-ex1_overunderflow.c - overflow and underflow
//  - Solution to Programming Exercise 1, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/14/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	int i;
	float f;

	i = 0x7fffffff;
	printf("Integer overflow: %d + 1 = %d\n", i, i + 1); // it becomes negative.

	// f = 3.4e38 * 100.0f;
	f = 0x1.0p127 * 100.0f;		// 0x1.0p128 = 3.4028e38 overflows already;
	printf("Float overflow: %f\n", f);

	f = 2.0e20 + 1.0;
	printf("Float underflow: %f\n", f);

	return 0;
}