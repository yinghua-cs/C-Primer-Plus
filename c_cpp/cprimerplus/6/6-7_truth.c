//  truth.c -- what values are true?
//  - Listing 6.7, Chapter 6, C Primer Plus, 6th. Page 200.
//
//  Created by Yinghua Han on 7/20/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	double n = 3;	// change int to double

	while (n)
		printf("%2f is true\n", n--);
	printf("%2f is false\n", n);

	n = -3;
	while (n)
		printf("%2f is true\n", n++);
	printf("%2f is false\n", n);

	return 0;

}