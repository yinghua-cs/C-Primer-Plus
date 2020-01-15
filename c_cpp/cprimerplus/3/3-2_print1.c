//  print1.c -- displays some properties of printf()
//  - Listing 3.2, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 9/12/19.
//  Copyright © 2019 Yinghua Han. All rights reserved.

#include <stdio.h>

int main(void)
{
	int ten = 10;
	int two = 2;

	printf("Doing it right: ");
	printf("%d minus %d is %d\n", ten, 2, ten - two);

	printf("Doing it wrong: ");
	printf("%d minus %d is %d\n", ten);	// forget 2 arguments

	return 0;
}