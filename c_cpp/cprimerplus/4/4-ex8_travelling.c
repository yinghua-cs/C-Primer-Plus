//  4-ex8_travelling.c - calculating the miles-per-gallon value
//  - Solution to Programming Exercise 8, Chapter 4, C Primer Plus, 6th. Page 142
//
//  Created by Yinghua Han on 6/16/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

int main(void)
{
	const float GALLONTOLITER = 3.785;
	const float MILETOKM = 1.609;

	float mile, gas;

	printf("Please enter the number of miles traveled:\n");
	scanf("%f", &mile);
	printf("and the number of gallons of gasoline consumed:\n");
	scanf("%f", &gas);

	printf("It is %.1f miles-per-gallon,\n", mile / gas);
	printf("and it is %.1f liters-per-100-km.\n", gas * GALLONTOLITER * 100 / (mile * MILETOKM));

	return 0;

}