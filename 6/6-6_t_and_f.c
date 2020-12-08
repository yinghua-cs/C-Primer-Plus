//  t_and_f.c -- true and false values in C
//  - Listing 6.6, Chapter 6, C Primer Plus, 6th. Page 199.
//
//  Created by Yinghua Han on 7/20/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int true_val, false_val;

	true_val = (10 > 2);	// value of a true relationship
	false_val = (10 == 2);	// value of  a false relationship
	printf("true = %d; false = %d \n", true_val, false_val);

	return 0;
	
}