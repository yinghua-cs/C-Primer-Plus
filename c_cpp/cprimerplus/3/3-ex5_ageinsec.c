//
//  3-ex5_ageinsec.c - output your age in seconds
//  - Solution to Programming Exercise 5, Chapter 3, C Primer Plus, 6th.
//
//  Created by Yinghua Han on 4/15/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>

int main(void)
{
	unsigned short age;

	printf("Please enter your age in years:");
	scanf("%d", &age);
	printf("Your age is %d year(s) old, it's %e seconds.\n", age, age * 3.156e7);

	return 0;
}