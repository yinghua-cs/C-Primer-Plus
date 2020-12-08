//  addemup.c -- five kinds of statements
//  - Listing 5.13, Chapter 5, C Primer Plus, 6th. Page 169.
//
//  Created by Yinghua Han on 6/22/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)					/* finds sum of first 20 integers */
{
	int count, sum;				/* declaration statement          */

	count = 0;					/* assignment statement           */
	sum = 0;					/* ditto                          */

	while (count++ < 20)		/* while                          */
		sum = sum + count;		/*     statement                  */
	printf("sum = %d\n", sum);	/* function statement             */

	return 0;					/* return statement               */
	
}