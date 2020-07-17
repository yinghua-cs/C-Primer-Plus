//  post_pre.c -- postfix vs prefix
//  - Listing 5.11, Chapter 5, C Primer Plus, 6th. Page 163.
//
//  Created by Yinghua Han on 6/20/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;

	a_post = a++;	// value of a++ during assignment phase
	pre_b = ++b;	// value of ++b during assignment phase
	printf("a  a_post   b   pre_b \n");
	printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

	return 0;

}