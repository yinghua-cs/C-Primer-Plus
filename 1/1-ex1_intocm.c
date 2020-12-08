//
//  1-ex1_intocm.c - converts inches to centimeters
//  - Solution to Programming Exercise 1, Chapter 1, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/14/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

#include <stdio.h>

int main(void)
{
	float m;
	printf("\nPlease enter the value of inch(es):");
	scanf("%f", &m);
	printf("\n%.2f inches is %.2f centimeters.\n", m, m * 2.54);

	return 0;

}