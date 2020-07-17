//
//  5-ex1_hrmin.c - change minutes into hours and minutes
//  - Solution to Programming Exercise 1, Chapter 5, C Primer Plus, 6th. Page 187
//
//  Created by Yinghua Han on 7/13/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.

# include <stdio.h>

# define MINSINHOURS 60

int main(void)
{
	int mins, hr, mm;

	printf("Please enter the value in minutes (value <= 0 to stop): \n");
	scanf("%d", &mins);

	while (mins > 0)
	{
		hr = mins / MINSINHOURS;
		mm = mins % MINSINHOURS;
		printf("%d minutes are %d hours and %d minutes.\n", mins, hr, mm);

		printf("Please enter the value in minutes (value <= 0 to stop): \n");
		scanf("%d", &mins);
	}

	printf("Bye~\n");

	return 0;

}