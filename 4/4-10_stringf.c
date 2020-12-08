//  stringf.c -- string formatting
//  - Listing 4.10, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 5/6/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

# define BLURB "Authentic imitation!"

int main(void)
{
	printf("[%2s]\n", BLURB);		// [Authentic imitation!]
	printf("[%24s]\n", BLURB);		// [    Authentic imitation!]
	printf("[%24.5s]\n", BLURB);	// [                   Authe]
	printf("[%-24.5s]\n", BLURB);	// [Authe                   ]

	return 0;

}