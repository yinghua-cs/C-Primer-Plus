//
//  5-ex6_addsqup.c - add up the squares of 0 to n
//  - Solution to Programming Exercise 6, Chapter 5, C Primer Plus, 6th. Page 187
//
//  Created by Yinghua Han on 7/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
// 


# include <stdio.h>

int main(void)					/* finds sum of the squares of first n integers  */
{
	int count, sum, n;			/* declaration statement          */

	printf("Enter a number the addup stops at:\n");
	scanf("%d", &n);

	count = 0;					/* assignment statement           */
	sum = 0;					/* ditto                          */

	while (n > 0 && count++ < n)/* while                          */
		sum = sum + count * count;		/*     statement                  */
	printf("sum = %d\n", sum);	/* function statement             */

	return 0;					/* return statement               */
	
}