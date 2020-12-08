//  printout.c -- uses conversion specifiers
//  - Listing 4.6, Chapter 4, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/26/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

# define PI 3.141593

int main(void)
{
	int number = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %D contestants ate %F berry pies.\n", 
		number, pies);
	printf("The value of pi is %f.\n", PI);
	printf("Farewell! Thou art too dear for my possessing, \n");
	printf("%c%d\n", '$', 2 * cost);

	return 0;

}