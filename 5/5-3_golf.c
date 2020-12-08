//  golf.c -- golf tournament scorecard
//  - Listing 5.3, Chapter 5, C Primer Plus, 6th. Page 148.
//
//  Created by Yinghua Han on 6/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	int jane, tarzan, cheeta;

	cheeta = tarzan = jane = 68;
	printf("                  cheeta   tarzan     jane\n");
	printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

	return 0;

}